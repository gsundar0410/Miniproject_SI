
#include <stdio.h>


typedef struct Conversion_bin
{
    int binary_op[50];
    int arr_l;
} Conversion_bin;
typedef struct Input_bin
{
    long int num;
    int base;
} Input_bin;
Conversion_bin transformBinary(Input_bin a);


Conversion_bin transformBinary(Input_bin a)
{
    int num = a.num, b = a.base;
    int k = 0, store_num = num;
    Conversion_bin res;
    while (num != 0)
    {
        *(res.binary_op+k) = num % b;
        num /= b;
        k++;
    }
    res.arr_l = k;
    if (store_num == 0)
    {
        *(res.binary_op) = 0;
        res.arr_l = 1;
    }
    return res;
}
