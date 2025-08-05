#include<stdio.h>

void printbinary(unsigned int a)
{
    if(a == 1)
    {
        printf("%d", 1);
    }
    else if( a == 0)
    {
        printf("%d",0);
    }
    else
    {
        printbinary(a/2);
        printf("%d", a%2);
    }
}

int main()
{
    printbinary(7);
}