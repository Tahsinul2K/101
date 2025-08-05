#include <stdio.h>
int add(int a, int b)
{
    return a + b;
}
int main()
{
    int (*fptr)(int, int);
    fptr = add;
    int c = fptr(6, 9);
    printf("%d", c);
}
/*
Function pointer can be called using
either (*fptr)(6, 9) or fptr(6, 9)
Both forms are equivalent in C
The (*fptr) syntax makes it more
explicit that we're using a function pointer
*/