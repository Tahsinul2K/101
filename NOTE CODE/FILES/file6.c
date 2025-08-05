#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main() // reversing the entire file-
{
    FILE* ifp = fopen("mytext.txt","r");
    FILE* ofp = fopen("yourtext.txt", "w");

    fseek(ifp,0, SEEK_END);

    for(long i =ftell(ifp)-1; i>=0 ; i--) //It returns a long integer value as the current position in the file.
    {
        fseek(ifp, i , SEEK_SET);
        char a = fgetc(ifp);
        fputc(a,ofp);
    }
    fclose(ifp);
    fclose(ofp);
}