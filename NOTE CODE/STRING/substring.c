#include <stdio.h>
#include <string.h>
char *substring(char line[], char word[])
{
    char *p = NULL;
    int j = 0;
    int k = 0;
    for (int i = 0; i < strlen(line); i++)
    {
        if (line[i] == word[j])
        {
            k = i + 1;
            j++;
            
            while (line[k] == word[j])
            {
                k++;
                j++;
            }

            if (word[j] == '\0')
            {
                p = &line[i];
                break;
            }
            else
            {
                j = 0;
                k = 0;
            }
        }
    }
    return p;
}
int main()
{
    char s1[100];
    char s2[100];

    fgets(s1, sizeof(s1), stdin);
    s1[strlen(s1) - 1] = '\0';

    fgets(s2, sizeof(s2), stdin);
    s2[strlen(s2) - 1] = '\0';

    char *p = substring(s1, s2);
    printf("%s", p);
}