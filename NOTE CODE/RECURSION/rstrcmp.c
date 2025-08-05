#include<stdio.h>

int rstrcmp(char a[], char b[], int i)
{
    if(a[i] == b[i])
    {
        if(a[i] == '\0')
        {
            return 0;
        }
        else return rstrcmp(a,b,i+1);
    }
    else if(a[i] > b[i])
    {
        return 1;
    }
    else if( a[i] < b[i])
    {
        return -1;
    }
}
int main()
{
    char a[] = "Hello";
    char b[] = "Bello";
    int k = rstrcmp(a,b,0);
    printf("%d", k);
}