#include<stdio.h> // 22-23 7.a
#include<stdlib.h>
int main()
{   int row, column;
    scanf("%d%d",&row,&column);
    int** mat = malloc( sizeof(int*) * row);
    for(int i = 0 ; i<row ; i++)
    {
        *(mat+i) = malloc(sizeof(int) * column);
    }
    for(int i = 0 ; i < row ; i ++ )
    {
        for(int j = 0 ; j< column ; j++)
        {
            scanf("%d",(*(mat+i)+j));
        }
    }
    //diag max
    int max = *(*(mat));
    for(int i = 0 ; i < row ; i ++ )
    {
        if(max < *(*(mat+i)+i))
        {
            max = *(*(mat+i)+i);
        }
    }
    printf("diag max = %d\n",max);

    //min non diagonal

    int min = *(*(mat)+1);
    for(int i = 0 ; i < row ; i ++ )
    {
        for(int j = 0 ; j< column ; j++)
        {
            if(i == j)
            {
                continue;
            }
            else if( min > *(*(mat+i)+j) )
            {
                min = *(*(mat+i)+j);
            }
        }
    }
    printf("non diag min = %d", min);
    return 0;
}