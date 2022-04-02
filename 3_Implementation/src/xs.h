
#include <stdio.h>
#include <stdlib.h>

typedef struct Conversion_xs
{
    int xs_op[50];
    int arr_l;
} Conversion_xs;
typedef struct Input_xs
{
    int num;
} Input_xs;
Conversion_xs transformXS(Input_xs a);


Conversion_xs transformXS(Input_xs a)
{
    int num = a.num;
    int i = 0, store_num = num;
    int arr[5];
    Conversion_xs res;
    while (num != 0)
    {
        arr[i++] = (num % 10) + 3;
        num = num / 10;
    }
    int c = 0;
    for (int j = 0; j < i; j++)
    {
        int k = 4;
        while (*(arr + j) != 0)
        {
            k--;
            *(res.xs_op + c) = *(arr + j) % 2;
            *(arr + j) = *(arr + j) / 2;
            c++;
        }

        while (k--)
        {
            *(res.xs_op + c) = 0;
            c++;
        }
    }
    res.arr_l = c;
    if (store_num == 0)
    {
        int k = 4;
        res.arr_l = k;
        *(res.xs_op) = 1;
        *(res.xs_op + 1) = 1;
        *(res.xs_op + 2) = 0;
        *(res.xs_op + 3) = 0;
    }
    return res;
}
