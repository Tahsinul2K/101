#include<stdio.h>


void print(int (*arr)[3], int a, int b)
{   
    printf("\n\n\n THIS IS WHAT \n");
    for( int i = 0 ; i< a ; i++)
    {
        for(int j = 0 ; j< b; j++)
        {
            printf("%d ", *(*(arr+i) + j));
        }
        printf("\n");
    }
}
int main()
{   
    int m = 3, n = 3;
    int num[m][n];
    for( int i = 0 ; i< m ; i++)
    {
        for(int j = 0 ; j< n; j++)
        {
            scanf("%d",&num[i][j]);
        }
    }

    print(num,m,n);
}