/* variable that retains its value even after function has ended*/
#include<stdio.h>
void func1()
{
    int i = 0;
    i++;
    printf("i = %d\n",i);
}
void func2()
{
    static int j = 0;
    j++;
    printf("j = %d\n",j);
}
int main()
{
    func1();
    func1();
    func1();
    printf("\n");
    func2();
    func2();
}