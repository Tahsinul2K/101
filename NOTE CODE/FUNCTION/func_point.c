#include <stdio.h>

// A simple addition function
int add(int a, int b) {
    return a + b;
}

// A simple subtraction function
int subtract(int a, int b) {
    return a - b;
}

void calc(int a, int b, int (*op)(int, int)) {
    printf("%d\n", op(a, b));
}

int main() {
  
    // Passing different 
    // functions to 'calc'
    calc(10, 5, &add);
  	calc(10, 5, &subtract);
    return 0;
}
/* ARRAYS AS PARAMETER

int sum(int a[], int n)
// or (int * a, int n)
{
int s = 0;
for (int k = 0; k < n; ++k)
s += a[k];
return s;
}

int main()
{
int c[5] = {1, 3, 2, 5, 9};
printf("%i", sum(c, 5));
// or sum(&c[0], 5)
return 0;
}
*/