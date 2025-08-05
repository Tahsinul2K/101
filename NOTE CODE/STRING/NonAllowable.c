#include<stdio.h>
int main()
{
    char ptr[10];
    scanf("%9[^q]",ptr);
    printf("%s", ptr);
}