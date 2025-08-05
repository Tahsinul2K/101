#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main() // remove spaces from each line
{
    FILE* ifp = fopen("file7_input.txt", "r");
    FILE* ofp = fopen("file7_output.txt", "w");
    int c;
    while((c = fgetc(ifp)) != EOF)
    {
        if(isalnum(c) || c == '\n')
        {
            fputc(c,ofp);
        }
    }
    fclose(ofp);
    fclose(ifp);
}