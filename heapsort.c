#include <stdio.h>
#include <stdlib.h>
#include "heapsort.h"
//堆排序
void heap_heap_sort(uint8_t *data,
                    uint8_t unit,
                    uint32_t max_len,
                    uint8_t status,
                    int8_t (*compare_func)(uint8_t *a,uint8_t *b,uint8_t status),
                    uint8_t* (*get_addr)(uint8_t *src,uint32_t index,uint32_t u))
{

}
//创建最大堆
void heap_build_heap(uint8_t *data,
                     uint8_t unit,
                     uint32_t max_len,
                     uint8_t status,
                     int8_t (*compare_func)(uint8_t *a,uint8_t *b,uint8_t status),
                     uint8_t* (*get_addr)(uint8_t *src,uint32_t index,uint32_t u))
{

}

/*******************
* 最大堆调整
* @name     heap_max_heapify
* @brief 
* @param    heap    堆
* @param    unit    单位
* @param    head    头
* @param    max_len 最大长度
* @param    status  状态
* @param    (*compare_func)(uint8_t *a,uint8_t *b,uint8_t status)
* @param    (*get_addr)(uint8_t *src,uint32_t index,uint32_t u)
*/
void heap_max_heapify(uint8_t *heap,
                      uint32_t unit,
                      uint32_t head,
                      uint16_t max_len,
                      uint8_t status,
                      int8_t (*compare_func)(uint8_t *a,uint8_t *b,uint8_t status),
                      uint8_t* (*get_addr)(uint8_t *src,uint32_t index,uint32_t u))
{
    while ()
}
//堆比较
int8_t heap_compare(uint8_t *a,uint8_t *b,uint8_t status)
{

}
//冒泡排序
void bubble_sort(uint8_t *data,uint8_t len);
//插入排序
void insert_sort(uint8_t *data,uint8_t len);
//获取最大长度
uint16_t get_max_num_len(uint8_t *str,uint8_t **max_num);

void swap(uint8_t *a, uint8_t *b)
{
    uint8_t temp = *a;
    *a = *b;
    *b = temp;
}