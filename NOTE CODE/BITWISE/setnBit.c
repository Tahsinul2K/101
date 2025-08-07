#include<stdio.h>
int setnBit(int x, int p, int n)
{
    int m = 1;
    m = m << p;
    for(int i = 0 ; i<n ; i++)
    {
        x = x^m;
        m = m>>1;
    }
    return x;
}
int main()
{
    int x = 54;
    //  x = 000 ... 0110110
    int p = 5;
    int n = 3;
    int y = setnBit(x,p,n);

    printf("%d",y);
}