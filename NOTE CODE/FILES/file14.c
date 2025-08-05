/*
Write down a program that will clone itself in reverse,
i.e., copy its own content in reverse order. Name the copy as rcopy.c.
*/
#include<stdio.h>
int main()
{
    FILE* ifp = fopen("file14_input.txt", "r");
    FILE* ofp = fopen("file14_output.txt", "w");
    fseek(ifp,0,SEEK_END);
    long int a = ftell(ifp);
    fseek(ifp,0,SEEK_SET);
    for(int i = 1 ; i<=a ; i++)
    {
        fseek(ifp, -i, SEEK_END);
        char c = fgetc(ifp);
        fputc(c,ofp);
    }
    fclose(ifp);
    fclose(ofp);
}