#include<stdio.h>
int setBit(int a, int p)
{
    int m = 1;
    m = m << 1;

    return a^m;
}
int main()
{
    int x = 7;
    int y = setBit(x,1);
    printf("%d",y);
}
/*
a = 5 -> 000 ... 101
m = 1 -> 000 ... 001

left shift m by p = 1 amount

000 ... 010

result due to XOR operation
a = 000 ... 101
m = 000 ... 010

result = 000 ... 111 

Reason for using XOR:
If the target bit is 1, it changes to 0
And if the target bit is 0, changes it to 1;
*/