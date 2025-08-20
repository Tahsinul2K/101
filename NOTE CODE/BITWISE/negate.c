/*negate(x) returns -x only use ~ and +*/
#include<stdio.h>
int negate(int a)
{
    int b = ~a+1;
    return b;
}
int main ()
{
    int x = 3;
    printf("%d",negate(x));
}