#include<stdio.h>

int fact(int a)
{
    if( a == 0)
    {
        return 1;
    }
    else 
    {
        return a* fact(a-1);
    }
}
int main()
{
    int num = 5;

    int k = fact(num);
    printf("%d", k);
    return 0;
}