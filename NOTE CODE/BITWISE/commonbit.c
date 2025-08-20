#include <stdio.h>
int binary(int a)
{
    int result = 0;
    while (a != 0)
    {
        result *= 10;
        result = result + (a % 2);
        a /= 2;
    }
    int reverse = 0;
    while (result != 0)
    {
        reverse = reverse + (result % 10);
        reverse *= 10;
        result /= 10;
    }
    return reverse;
}
int main()
{
    int a = 201, b = 32767, count = 0;
    int m = a & b, mask = 1 << 31;
    int max = b > a ? b : a;
    
    while (max != 0)
    {
        max = max >> 1;
        max = max & mask;
        count++;
    }
    int common_bit1 = 32 - count;
    int bin = binary(m);
    int common_bit2 = 0;
    while (bin != 0)
    {
        if (bin % 2 == 1)
        {
            common_bit2++;
        }
        bin /= 10;
    }
    printf("%d", common_bit1 + common_bit2);
    return 0;
}