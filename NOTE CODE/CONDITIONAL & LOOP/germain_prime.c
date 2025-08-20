#include<stdio.h>
int prime(int num)
{   

    for(int j = 2; j*j<=num ; j++)
    {
        if(num%j == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int num;
    scanf("%d",&num);
    for(int i = 2 ;i <= num ;i++)
    {
        if(prime(i))
        {
            if(prime(2*i + 1))
            {
                printf("%d\n",i);
            }

        }
    }
}
// 23 - 24 5.b