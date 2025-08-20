#include<stdio.h> // 22-23 4.a
#include<stdlib.h>
#include<string.h>
char* num_to_string(int a)
{
    int temp = a;
    int digit = 0;
    while(temp!=0)
    {
        temp/=10;
        digit++;
    }
    char* p = malloc(sizeof(char)*(digit+1));
    sprintf(p,"%d",a);
    return p;
}
int main()
{
    int num;
    scanf("%d",&num);

    char* a = num_to_string(num);
    printf("%s %d",a, strlen(a));
    free(a);
}