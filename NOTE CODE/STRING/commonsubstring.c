#include<stdio.h>
#include<string.h>
void longsub(char s1[], char s2[], char s3[])
{   
    char temp[100];
    s3[0] = '\0';
    for(int i = 0 ; i<strlen(s1) ; i++)
    {
        for(int j = 0 ; j< strlen(s2); j++)
        {
            if(s1[i] == s2[j] )
            {   
                int k = i;
                int m = j;
                int l = 0;
                while(s1[k] == s2[m] && s1[k] != '\0' && s2[m] != '\0')
                {
                    temp[l] = s1[k];
                    k++;
                    m++;
                    l++;
                }
                temp[l] = '\0';
                
                if(strlen(temp) > strlen(s3))
                {
                    strcpy(s3, temp);
                }
            }
        }
    }
}
int main()
{
    char s1[100];
    char s2[100];
    char s3[100];
    fgets(s1, sizeof(s1), stdin);
    s1[strlen(s1) - 1] = '\0';

    fgets(s2, sizeof(s2), stdin);
    s2[strlen(s2) - 1] = '\0';

    longsub(s1,s2,s3);

    printf("%s\n", s3);
}