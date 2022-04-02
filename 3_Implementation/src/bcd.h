
#include <stdio.h>
typedef struct Conversion_bcd
{
    int bcd_op[50];
    int arr_l;
} Conversion_bcd;
/**
 * @brief Structures for storing the input & output stream
 *
 */

typedef struct Input_bcd
{
    int num;
} Input_bcd;
Conversion_bcd transformBcd(Input_bcd a);


Conversion_bcd transformBcd(Input_bcd a)
{
    int num = a.num;
    int i = 0, store_num = num;
    int arr[5];
    Conversion_bcd res;
    while (num != 0)
    {
        arr[i++] = num % 10;
        num = num / 10;
    }
    int c = 0;
    for (int j = 0; j < i; j++)
    {
        int k = 4;
        while (*(arr + j) != 0)
        {
            k--;
            *(res.bcd_op+c) = *(arr + j) % 2;
            *(arr + j) = *(arr + j) / 2;
            c++;
        }
        while (k--)
        {
            *(res.bcd_op+c) = 0;
            c++;
        }
    }
    res.arr_l = c;
    if (store_num == 0)
    {
        int k = 4;
        res.arr_l = k;
        while (k--)
        {
            *(res.bcd_op + k) = 0;
        }
    }
    return res;
}
