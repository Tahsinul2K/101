/*A Mersenne prime is a prime number that can be expressed in the form 2n - 1, where 'n' is also a prime number.
In simpler terms, it's a prime number that is one less than a power of two. For example, 3 is a Mersenne prime
because it can be written as 22 - 1, and 7 is another, as it equals 23 - 1. */
#include<stdio.h>
#include<math.h>
int main()
{
    int a, count = 0;
    for(int i = 2;;i++)
    {   
        int not_prime = 0;
        int num = pow(2,i) - 1;
        int divisor = 2;
        while(divisor*divisor < num )
        {
            if(num%divisor == 0)
            {
              not_prime = 1;  
            }
            divisor++;
        }
        if(not_prime == 0)
        {
            printf("%d\n",num);
            count++;
        }
        if(count == 5)
        {
            break;
        }
    }
}