#include <stdio.h>
#include <string.h>
char *token(char *arr, char del[])
{
    static int arr_num;
    int tokenized = 0;
    char *i;
    static char *p1;
    static char *start;
    if (arr != NULL)
    {
        p1 = arr;
        arr_num = strlen(arr);
        start = arr;
    }
    for (i = p1; i < (start + arr_num); i++)
    {
        for (int j = 0; del[j] != '\0'; j++)
        {
            if (*(i) == del[j])
            {
                *i = '\0';
                tokenized = 1;
                break;
            }
        }
        if (tokenized == 1)
        {
            break;
        }
    }
    char *output = p1;
    if (i < (start + arr_num))
    {
        p1 = i + 1;
    }
    if(*p1 == '\0')
    {
        return NULL;
    }
    return output;
}
int main()
{
    char sen[100] = "Hello how are you";
    // fgets(sen,sizeof(sen),stdin);
    char del[100] = " ";
    // scanf("%s",del);

    char *tok = token(sen, del);
    printf("%s\n", tok);
    tok = token(NULL, del);
    printf("%s\n", tok);
    tok = token(NULL, del);
    printf("%s\n", tok);
    tok = token(NULL, del);
    printf("%s\n", tok);
    tok = token(NULL, del);
    printf("%s\n", tok);
    tok = token(NULL, del);
    printf("%s\n", tok);
}