#include<stdio.h> // 22 - 23 4.c
int main()
{
    int x = 20 , y = 10, z = 0;
    int a = x && ! y || z;
    int b = x++ * --y + !z;
    printf("%d %d",a,b);
}