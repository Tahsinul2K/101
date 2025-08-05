#include<stdio.h>
#include<string.h>
int same(char s1[], char s2[])
{
    if(strlen(s1) != strlen(s2))
    {
        return 0;
    }
    int i = 0;
    while(s1[i] != '\0')
    {
        if(s1[i] != s2[i])
        {
            return 0;
        }
        i++;
    }
    return 1;
}
int main()
{
    char s1[100];
    char s2[100];
    fgets(s1, sizeof(s1), stdin);
    s1[strlen(s1) - 1] = '\0';

    fgets(s2, sizeof(s2), stdin);
    s2[strlen(s2) - 1] = '\0';

    int p = same(s1,s2);
    printf("%d",p);
}