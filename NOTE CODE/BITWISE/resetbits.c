#include<stdio.h>
int resetbits(int x, int p , int n)
{
    int mask = ~0;
    int dum = ~1;
    for(int i = 0 ; i < p ; i++)
    {
        dum = dum << 1;
        dum = dum|1;
    }
    for(int i = 0 ; i< n ; i++)
    {
        mask = mask & dum;
        dum = dum >> 1;
    }
    return x & mask;
}
int main()
{
    int x = 54;
    int p = 5;
    int n = 3;

    int y = resetbits(x,p,n);
    printf("%d",y);
}