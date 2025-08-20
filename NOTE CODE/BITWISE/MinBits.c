#include<stdio.h>
int MinBits(int a)
{   
    int count=0;
    while(a!=0)
    {
        a=a >> 1;
        count++;
    }
    return count;
}
int main()
{
    printf("%d",MinBits(8));
}