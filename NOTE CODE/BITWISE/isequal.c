// relational opertor not allowed
int isEqual(int a , int b)
{
    return a^b;
}
#include<stdio.h>
int main()
{
    int x = 9;
    int y = 9;
    printf("%d", isEqual(x,y));
}