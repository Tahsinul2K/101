#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *dbl_dbl(char *str, char c)
{
    int len = strlen(str);
    int len2 = len;
    for (int i = 0; i < len; i++)
    {
        if (str[i] == c)
        {
            len2++;
        }
    }
    char *s = (char *)malloc(sizeof(char) * (len2+1));
    int i = 0, j =0; 
    while (str[i] != '\0')
    {
        s[j++] = str[i];

        if (str[i] == c)
        {
            s[j++] = c;
        }
        i++;
    }
    s[j] = '\0';
    return s;
}
int main()
{
    char s1[100];

    fgets(s1, sizeof(s1), stdin);
    s1[strlen(s1) - 1] = '\0';

    char c;
    scanf("%c", &c);

    char *p = dbl_dbl(s1, c);
    printf("%s", p);
    free(p);
}