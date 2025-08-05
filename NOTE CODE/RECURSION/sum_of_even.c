#include <stdio.h>

int sum_even(int a)
{
    int dig = a % 10;
    if (dig % 2 != 0)
    {
        dig = 0;
    }
    a = a / 10;

    if (a == 0)
    {
        return dig;
    }
    else
    {
        return dig + sum_even(a);
    }
}

int main()
{
    int k = sum_even(1234);

    printf("%d", k);
}