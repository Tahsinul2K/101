#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    FILE* ifp = fopen("mytext.txt","r");
    FILE* ofp = fopen("yourtext.txt", "w");
    char sentence[100]; // Reversal of lines, not the entire document

    while(fgets(sentence, sizeof(sentence), ifp) != 0)
    {
        char reverse[100];
        int i = strlen(sentence)-2, j = 0;
        sentence[strlen(sentence)-1] = '\0';
        while(i>=0)
        {
            reverse[j] = sentence[i];
            j++;
            i--;
        }
        reverse[j] = '\0';
        fprintf(ofp, "%s\n", reverse);
    }
    fclose(ifp);
    fclose(ofp);
}