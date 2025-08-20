#include <stdio.h>
int findTrailingZeroes(int a)
{
    int count = 0;
    int i = 0;
    while (a != 0)
    {
        a = a >> 1;
        count++;
    }
    int sum = 0;
    int zero = sizeof(int) * 8 - count;
    while (zero != 0)
    {
        sum *= 10;
        sum = sum + (zero % 2);
        zero /= 2;
    }
    int reverse = 0;
    while (sum != 0)
    {
        reverse *= 10;
        reverse = reverse + (sum % 10);
        sum /= 10;
    }
    return reverse;
}
int main()
{
    printf("%d\n", findTrailingZeroes(4));
    printf("%d", -1-2*-1-2);
}