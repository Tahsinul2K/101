#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main() // number of lines
{
    FILE* ifp = fopen("file12_input.txt", "r");
    FILE* ofp = fopen("file12_output.txt", "w");
    int num = 1;
    int c;
    while((c = fgetc(ifp)) != EOF)
    {
        if(c == '\n')
        {
            num++;
        }
    }
    fprintf(ofp,"%d",num);
    fclose(ifp);
    fclose(ofp);
}