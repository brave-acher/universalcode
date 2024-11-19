#include "kmp.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * @brief Get the KMP next object
 * @param  sub_str: 
 * @param  next: 
 * @param  len: 
 */
void get_KMP_next(const char *sub_str, int next[], int len)
{
    int j = 0;
    next[0] = 0;

    for (int i = 1; i < len; i++) {                     //i指向后缀末尾， j指向前缀末尾
        while (j > 0 && sub_str[i] != sub_str[j])
            j = next[j - 1];                             //若失配，向前回溯
        if (sub_str[i] == sub_str[j])
            j++;
        next[i] = j;
    }
}


/**
 * @brief  
 * @param  str: 
 * @param  sub_str: 
 * @return int: 
 */
int KMP_find_sub_string(const char *str, const char *sub_str)
{
    int i = 0, j = 0;
    size_t str_len = strlen(str);
    size_t sub_str_len = strlen(sub_str);

    if (str_len <= 0)
    {
        return -1;
    }
    if (sub_str_len <= 0)
    {
        return -1;
    }
    if (sub_str_len > str_len)
    {
        return -1;
    }

    int next[sub_str_len];
    get_KMP_next(sub_str, next, sub_str_len);

    int j = 0;
    for (int i = 0; i < str_len; i++) {
        while (j > 0 && str[i] != sub_str[j])
            j = next[j - 1];
        if (str[i] == sub_str[j])
            j++;
        if (j == sub_str_len)
            return i - sub_str_len + 1;
    }

    return -1;

}

