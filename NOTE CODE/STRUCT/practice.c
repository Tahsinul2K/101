#include<stdio.h>
struct datas{
    int a;
    int b;
    int c;
}afreen,afif;
int main()
{
    afreen.a = 2;
    afif.a = 12;
    printf("%d %d ",afreen.a,afif.a);
    struct datas arif;
    arif.a = 123;
    printf("%d ", arif.a);
}