/*
Write a program that creates a new file containing the content of the text of a file twice. Consider the input text file contains the following line:

Dhaka is the capital of Bangladesh

The content of the newly created text file will be as follows:

Dhaka is the capital of Bangladesh
Dhaka is the capital of Bangladesh
*/
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
    FILE* ifp = fopen("file10_input.txt", "r");
    FILE* ofp = fopen("file10_output.txt", "w");
    int c;
    while((c = fgetc(ifp)) != EOF)
    {
        fputc(c,ofp);
    }
    fputc('\n', ofp);
    rewind(ifp);
    while((c = fgetc(ifp)) != EOF)
    {
        fputc(c,ofp);
    }
    fclose(ofp);
    fclose(ifp);
}