
#include <stdio.h>
#include <stdlib.h>

typedef struct Conversion_gray
{
    int gray_op[50];
    int arr_l;
} Conversion_gray;
typedef struct Input_gray
{
    int num;
} Input_gray;
Conversion_gray transformGray(Input_gray a);

Conversion_gray transformGray(Input_gray a)
{
    int num = a.num;
    int arr[50];
    int k = 0, store_num = num;
    Conversion_gray res;
    while (num != 0)
    {
        arr[k++] = num % 2;
        num = num / 2;
    }
    *(res.gray_op + k - 1) = *(arr + k - 1);
    for (int i = k - 2; i >= 0; i--)
    {
        *(res.gray_op + i) = *(arr + i) ^ *(arr + i + 1);
    }
    if (store_num == 0)
    {
        *(res.gray_op) = 0;
        k = 1;
    }
    res.arr_l = k;
    return res;
}
