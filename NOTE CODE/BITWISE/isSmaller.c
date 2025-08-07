#include<stdio.h>
int isSmaller(int a , int b)
{
    int c = a-b;

    c = c >> 31;
    if(c)
    {
        return 1;
    }
    else return 0;
}
int main()
{
    int a = 7;
    int b = 10;
    printf("%d",isSmaller(a,b));
}