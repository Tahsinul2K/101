#include<stdio.h>
int calculateHindex(int C[], int N)
{   
    int h_index=0;
    for(int i = 0 ; i< N ; i++)
    {
        if(C[i]<3)
        {
            break;
        }
        h_index++;
    }
    return h_index;
}
int main()
{
    int C[5] = {9,5,4,2,1};
    printf("%d\n", calculateHindex(C,5));
}