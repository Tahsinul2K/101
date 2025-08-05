#include<stdio.h>
int main()
{
    FILE* ifp = fopen("mytext.txt","r");
    FILE* ofp = fopen("yourtext.txt", "w");
    char sentence[100];
    while(fgets(sentence, sizeof(sentence), ifp) !=NULL)
    {
        fputs(sentence, ofp);
    }
    fclose(ifp);
    fclose(ofp);
}



