#include<stdio.h>
int main()
{
    char* ptr = "helo";
    ptr[0] = 'p';
    printf("%s", ptr);
}
/*Your code has a serious issue:

You assigned a string literal "helo" to a char* pointer.
Then you tried to modify it: ptr[0] = 'p';
String literals are read-only in C. Modifying them causes
undefined behavior and may crash your program.*/