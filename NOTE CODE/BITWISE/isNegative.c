#include<stdio.h>
int isNegative(int a)
{
    a = a>>31;
    a = ~a;
    if(a)
    {
        return 0;
    }
    else return 1;
}
int main()
{
    int x = 3;
    printf("%d",isNegative(x));
}