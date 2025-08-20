#include<stdio.h>
#include<string.h>
void reverse(char* p1)
{
    int size = strlen(p1);
    char* p2 = p1+ (size-1);
    while(p1 != p2)
    {
        char temp;
        temp = *p1;
        *p1 = *p2;
        *p2 = temp;
        p1++;
        p2--;
    } 
}
int main()
{
    char arr[100] = "dog";
    reverse(arr);
    printf("%s\n",arr);
}
// 23-24 1.b