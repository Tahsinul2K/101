#include<stdio.h>
int copylsb(int a)
{
    int mask = a;
    mask = mask<<31;
    mask = mask>>31;
    return mask;
}
int main()
{
    int num = 1;

    int a = copylsb(num);
    printf("%d",a);
}
/*
As others have already noted, -1 is the correct interpretation of this 32-bit signed integer.
This is because this is in two's-complement notation, in which the bit-patterns 0 to 2^31-1 (inclusive) are positive,
and bit-patterns 2^31 to 2^32-1 (inclusive) are treated as negative.
These negative numbers are actually the given number plus 2^32.
Thus a number with all 32 bits set to 1 is equivalent to -1
*/