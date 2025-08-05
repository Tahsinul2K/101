#include<stdio.h>
int largest ( int a[], int n)
{
    int index = n-1;
    if(index <= 0)
    {
        return a[0];
    }
    else 
    {
        return a[index] > largest (a, index-1) ? a[index] : largest (a,index-1);
    }
}

int main()
{
    int a[3] = { 34, 8 , 12};

    int max = largest( a, 3);
    printf("%d",max);
}