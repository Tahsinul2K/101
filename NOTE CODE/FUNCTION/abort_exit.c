/*
exit(0) -> terminates programme indicating success
exit(1) abort() -> terminats programme indicates failure
*/
#include<stdio.h>
#include<stdlib.h>
int dividing(int a, int b)
{
    if(b == 0)
    {
        //exit(1);
        abort();
    }
    else
    {
        return a/b;
    }

}
int main()
{
    printf("%d", dividing(8,0));
}