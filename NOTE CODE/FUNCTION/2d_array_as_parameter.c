/*
In C, when passing 2D arrays as parameters
you must specify the second dimension
*/

#include<stdio.h>
void print(int arr[][3], int a, int b) 
{
    for( int i = 0 ; i< a ; i++)
    {
        for(int j = 0 ; j< b; j++)
        {
            printf("%d", arr[i][j]);
        }
    }
}
int main()
{   
    int m = 3, n = 3;
    int arr[m][n];
    for( int i = 0 ; i< m ; i++)
    {
        for(int j = 0 ; j< n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    print(arr,3,3);
}