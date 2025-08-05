#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
    FILE* ifp = fopen("file16_input.txt", "r");
    FILE* ofp = fopen("file16_output.txt", "w");

    int row = 0, column=0;
    char line[100];
    while(fgets(line, sizeof(line), ifp) != NULL)
    {
        row++;
    }
    rewind(ifp);
    fgets(line,sizeof(line), ifp);
    for(int i = 0 ; line[i] != '\0'; i++)
    {
        if(isalnum(line[i]))
        {
            column++;
        }
    }
    int array[row][column];
    int i = 0, j=0;
    while(fgets(line,sizeof(line),ifp) !=NULL)
    {
        for(int i = 0 ; line[i]!= '\0'; i++)
        {
            if(isalnum(line[i]))
            {
                int a = atoi(line[i]);
                array[i][j] = a;
                j++;
            }
        }
        i++;
        j=0;
    }
    for(int i = 0 ; i<row ; i++)
    {
        for(int j = 0 ; j< column; j++)
        {
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
}