#include<stdio.h>
#include<string.h>
int main()
{
    char word[100] = "hello world, are you ready?";
    char* p = strtok(word,", ");
    printf("%s\n",p);
    p = strtok(NULL,", ");
    printf("%s\n",p);
    p = strtok(NULL,"y");
    printf("%s\n",p);
    printf("%s",word);
}
/* strtok will us prev address if no address is given*/
/* strtok modifies the original string too. putting '/0' at the end of first token*/
// hello/0world, are you ready?