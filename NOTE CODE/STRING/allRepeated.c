#include<stdio.h>
int allRepeated(int a)
{   
    int temp = a;
    int digit_num =0;
    while(temp!=0)
    {
        temp/=10;
        digit_num++;
    }
    if(digit_num%2 == 1)
    {
        return 0;
    }
    while(a!=0)
    {
        int dig1 = a%10;
        a/=10;
        int dig2 = a%10;
        a/=10;
        if(dig1 != dig2)
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

    printf("%d\n",allRepeated(num));
}
// 23-24 8.a