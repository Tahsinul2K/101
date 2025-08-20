#include<stdio.h>
int IsNotEqual(int a, int b)
{
    a = ~a;
    int mask = a|b;
    mask = ~mask;
    if(!mask)
    {
        return 0;
    }
    return 1;
}
int main()
{
    int a = 4 , b = 3;

    printf("%d",IsNotEqual(a,b));
}