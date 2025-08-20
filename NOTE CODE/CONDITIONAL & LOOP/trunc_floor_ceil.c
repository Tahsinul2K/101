#include<stdio.h> // 22- 23 4.c
int truncate(float x)
{
    return (int)x;
}
int rounding(float x)
{
    return (int)(-0.5+x);
}
int ceiling(float x)
{
    return (int)(x);
}
int main()
{
    // input will always be negative;
    float x;
    scanf("%f",&x);
    printf("trunc = %d, round = %d, ceil = %d",truncate(x), rounding(x),ceiling(x));

}