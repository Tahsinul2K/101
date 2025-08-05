#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main() // each line has variable number of numbers, commute sum of each line and show
{
    FILE* ifp = fopen("mytext.txt","r");
    FILE* ofp = fopen("yourtext.txt", "w");
    char sentence[100];
    while(fgets(sentence, sizeof(sentence), ifp) != NULL)
    {   
        int sum = 0 ;
        char *p = strtok(sentence, " \n"); //strtok(NULL, " \n") is valid because strtok remembers its position in the string between calls using a static internal pointer. When you pass NULL, it continues scanning from where it left off
        int num = atoi(p);  // suppose 14 2 3 4; pointer p now points to the string "14", if *p then we will get '1';
        sum = sum + num;
        while((p = strtok(NULL," \n")) != NULL)
        {
            num = atoi(p);
            sum = sum + num;
        }
        fprintf(ofp, "%d\n", sum);
    }
}