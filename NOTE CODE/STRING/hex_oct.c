#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
int main()
{
    char hex[100] = "A7B8";
    char oct[100];
    int num = 0;
    int powerup = strlen(hex)-1;
    //generating number;
    for(int i = 0 ; hex[i]!='\0'; i++)
    {
        if(isalpha(hex[i]))
        {
            num = num + ((hex[i] - 'A' + 10) * pow(16,powerup-i));
        }
        else
        {
            num = num + ((hex[i] - '0') * pow(16,powerup-i) );
        }
    }
    sprintf(oct,"%o",num);
    printf("%s\n",oct);
    return 0;
}
//23-24 1.c