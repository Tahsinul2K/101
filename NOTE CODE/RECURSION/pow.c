#include <stdio.h>
int powerup(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    else if (b == 1)
    {
        return a;
    }
    else
    {
        return a * powerup(a, b - 1);
    }
}
int main()
{
    int num = 2;
    int power = 3;

    int k = powerup(num, power);
    printf("%d", k);
}