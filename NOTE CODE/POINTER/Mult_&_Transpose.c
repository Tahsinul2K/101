#include<stdio.h>
#include<stdlib.h>
int** allocate(int row, int col)
{
    int** p = (int **)malloc(sizeof(int*) * row);

    for(int i = 0 ; i<row ; i++)
    {
        *(p+i) = malloc(sizeof(int) * col);
    }
    for(int i = 0 ; i < row ; i++)
    {
        for(int j = 0 ; j<col ; j++)
        {
            *(*(p+i)+j) = 0;
        }
    }
    return p;
}
void insert_value(int** a , int row, int col)
{
    for(int i = 0 ; i < row ; i++)
    {
        for(int j = 0 ; j<col ; j++)
        {
            scanf("%d", (*(a+i)+j));
        }
    }
}
int** mult(int** mat1, int** mat2, int row1, int col2, int col1)
{   
    int** result = allocate(row1, col2);
    for(int i = 0 ; i< row1; i++)
    {
        for(int j = 0 ; j< col2 ; j++)
        {
            for(int k = 0 ; k< col1 ; k++)
            {
                *(*(result+i)+j) += *(*(mat1+i)+k) * *(*(mat2+k)+j);
            }
        }
    }
    return result;
}
void print(int** a, int row, int col)
{   
    printf("THE MAT IS\n");
    for(int i = 0 ; i< row ; i++)
    {
        for(int j = 0 ; j< col ; j++)
        {
            printf("%d ", *(*(a+i)+j));
        }
        printf("\n\n");
    }
}
int** transpose(int** mat, int row, int col)
{
    int** trans = allocate(col,row);
    
    for(int i = 0 ; i < col ; i++)
    {
        for(int j = 0 ; j < row ; j++)
        {
            *(*(trans+i)+j) = *(*(mat+j)+i);
        }
    }
    return trans;
}
void free_all(int** a, int row)
{
    for(int i = 0 ; i< row ; i++)
    {
        free(*(a+i));
    }
    free(a);
}
int main()
{
    int row1,row2,col1,col2;
    scanf("%d%d",&row1,&col1);
    scanf("%d%d",&row2,&col2);

    int** mat1 = allocate(row1,col1);
    int** mat2 = allocate(row2,col2);
    insert_value(mat1, row1, col1);
    insert_value(mat2, row2,col2);
    //MULTIPLY
    int** result = mult(mat1,mat2, row1, col2, col1);
    print(result, row1, col2);

    //TRANSPOSE
    int** trans = transpose(mat1, row1,col1);
    print(trans, col1, row1);
    
    free_all(mat1,row1);
    free_all(mat2,row2);
    free_all(result, row1);
    free_all(trans, col1);
}