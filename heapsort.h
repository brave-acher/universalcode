#ifndef __HEAPSORT_H__
#define __HEAPSORT_H__
#ifdef __cplusplus
extern "C"{
#endif
enum{
    GREATER,
    LESS,
    EQUAL,
    NOTEQUAL,
};

enum{
    HEAP_MAX,
    HEAP_MIN,
};

enum{
    HEAP_SORT_DECLINE,
    HEAP_SORT_INCREASE,
};

void heap_heap_sort(uint8_t *data,
                    uint8_t unit,
                    uint32_t max_len,
                    uint8_t status,
                    int8_t (*compare_func)(uint8_t *a,uint8_t *b,uint8_t status),
                    uint8_t* (*get_addr)(uint8_t *src,uint32_t index,uint32_t u));

void heap_build_heap(uint8_t *data,
                     uint8_t unit,
                     uint32_t max_len,
                     uint8_t status,
                     int8_t (*compare_func)(uint8_t *a,uint8_t *b,uint8_t status),
                     uint8_t* (*get_addr)(uint8_t *src,uint32_t index,uint32_t u));

void heap_max_heapify(uint8_t *heap,
                      uint32_t unit,
                      uint32_t head,
                      uint16_t max_len,
                      uint8_t status,
                      int8_t (*compare_func)(uint8_t *a,uint8_t *b,uint8_t status),
                      uint8_t* (*get_addr)(uint8_t *src,uint32_t index,uint32_t u));

int8_t heap_compare(uint8_t *a,uint8_t *b,uint8_t status);
void bubble_sort(uint8_t *data,uint8_t len);
void insert_sort(uint8_t *data,uint8_t len);
uint16_t get_max_num_len(uint8_t *str,uint8_t **max_num);

void swap(uint8_t *a, uint8_t *b);

#ifdef __cplusplus
}
#endif
#endif
