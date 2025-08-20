#include<stdio.h>
int main()
{
    int n = 12;
    int a = (n%2)*(n%5);
    if(a == 0)
    {
        printf("YES");
    }
    else 
    {
        printf("NO");
    }
    return 0;
}