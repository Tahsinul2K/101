//22-23  5.a
#include<stdio.h>
#include<string.h>
int main()
{
    char str[180], reversedStr[180];
    fgets(str, sizeof(str), stdin);
    str[strlen(str)-1] = '\0';

    int i = 0, j = strlen(str) - 1 ;
    while(j>=0)
    {
        reversedStr[i] = str[j];
        i++;
        j--;
    }
    reversedStr[i] = '\0';
    puts(reversedStr);
    return 0;

}