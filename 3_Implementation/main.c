
#include <stdio.h>
#include <string.h>
#include "src/bnry.h"
#include "src/oct.h"
#include "src/hexd.h"
#include "src/bcd.h"
#include "src/xs.h"
#include "src/gry.h"

int main()
{
    
    int temp;
    printf("Enter the input number which has to be converted: \n");
    scanf("%d", &temp);
    printf("\nOUTPUTS:\n");
    Input_bin bin;
    Conversion_bin res_bin;
    bin.num=temp;
    bin.base = 2;
    res_bin = transformBinary(bin);
    int u = res_bin.arr_l;
    printf("\n\tBinary form:\t ");
    for (int i = u - 1; i >= 0; i--)
    {
        printf("%d", *(res_bin.binary_op + i));
    }

    
    Input_oct oct;
    Conversion_oct res_oct;
    oct.num = temp;
    oct.base = 8;
    res_oct = transformOct(oct);
    int v = res_oct.arr_l;
    printf("\n\tOctal form:\t ");
    for (int i = v - 1; i >= 0; i--)
    {
        printf("%d", *(res_oct.octal_op + i));
    }

   
    Input_hex hexa;
    Conversion_hex res_hexa;
    hexa.num = temp;
    hexa.base = 16;
    res_hexa = transformHexadecimal(hexa);
    int w = res_hexa.arr_l;
    printf("\n\tHexadecimal form:\t");
    for (int i = w - 1; i >= 0; i--)
    {
        printf("%c", *(res_hexa.hexadecimal_op + i));
    }

    
    Input_bcd bcd;
    Conversion_bcd res_bcd;
    bcd.num = temp;
    res_bcd = transformBcd(bcd);
    int x = res_bcd.arr_l;
    printf("\n\tBinary Coded Decimal (BCD) form:\t ");
    for (int i = x - 1; i >= 0; i--)
    {
        printf("%d", *(res_bcd.bcd_op + i));
    }

    
    Input_xs xs;
    Conversion_xs res_xs;
    xs.num = temp;
    res_xs = transformXS(xs);
    int y = res_xs.arr_l;
    printf("\n\tExcess-3 (XS-3) form:\t ");
    for (int i = y - 1; i >= 0; i--)
    {
        printf("%d", *(res_xs.xs_op + i));
    }

    
    Input_gray gray;
    Conversion_gray res_gray;
    gray.num = temp;
    res_gray = transformGray(gray);
    int z = res_gray.arr_l;
    printf("\n\tGray form: \t");
    for (int i = z - 1; i >= 0; i--)
    {
        printf("%d", *(res_gray.gray_op + i));
    }
}
