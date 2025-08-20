#include<stdio.h>
int strRlen(char s[])
{
    if(s[0] == '\0')
    {
        return 0;
    }
    else 
    {   
        int  i = 0;
        for(i = 0 ; s[i] != '\0'; i++)
        {
            s[i] = s[i+1];
        }
        return strRlen(s) + 1;
    }
}
int main()
{
    char arr[100] = "NIGGA";

    printf("%d\n",strRlen(arr));
}