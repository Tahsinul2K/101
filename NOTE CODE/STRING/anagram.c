#include<stdio.h>
#include<string.h>
#include<ctype.h>
int anagram(char s1[], char s2[])
{   
    if(strlen(s1) != strlen(s2))
    {
        return 0;
    }
    int freq1[26] = {0};
    int freq2[26] = {0};

    for(int i = 0 ; i < strlen(s1) ; i++)
    {
        freq1[tolower(s1[i]) - 'a']++;
        freq2[tolower(s2[i]) - 'a']++;
    }
    for(int i = 0 ; i<26 ; i++)
    {
        if(freq1[i] != freq2[i])
        {
            return 0;
        }
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

    int p = anagram(s1,s2);
    printf("%d",p);
}