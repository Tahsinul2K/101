/*When the preprocessor encounters a macro name in the code,
it performs a direct text substitution.
This means the macro is replaced with its defined value or code snippet.*/

#include<stdio.h>
#define max(a,b) ( (a) > (b) ? (a):(b) ) // absence of brackets will cause calculation or logical error

int main()
{
    int a = 3, b = 8;
    int z = max(a,b);
    printf("%d",z);
}
//for a macro there is no control jumping.