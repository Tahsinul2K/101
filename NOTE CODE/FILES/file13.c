#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main() // sum of odd num;
{
    FILE* ifp = fopen("file13_input.txt", "r");
    FILE* ofp = fopen("file13_output.txt", "w");
    int num, sum=0;
    while(fscanf(ifp,"%d",&num) == 1)
    {
        if(num%2==1)
        {
            sum+=num;
        }
    }
    fprintf(ofp, "%d", sum);
    fclose(ofp);
    fclose(ifp);
}