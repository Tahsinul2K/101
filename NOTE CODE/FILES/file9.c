/*
In each line of a file named "In.txt" there is a string and a number. For example, the file might look like below:

ABED 21
ABSBA 23
NIBIR 26

Write C code inside main function that reads until End-Of-File from in.txt, and for each line determines whether the string is palindrome or not and whether the number is odd/even and for each line of in.txt, writes a line in another file named out.txt. For example, for the in.txt sample shown above, the out.txt will look like this:

Not-Palindrome Odd
Palindrome Odd
Not-Palindrome Even
*/

#include<stdio.h>
#include<string.h>
void is_odd_even(int num, char verdict[]);
void is_palindrome(char word[], char verdict[]);
int main()
{
    FILE* ifp = fopen("file9_input.txt", "r");
    FILE* ofp = fopen("file9_output.txt", "w");

    char word[100];
    int num;

    while(fscanf(ifp, "%s %d", word, &num) == 2)
    {   
        char palindrome[10];
        char odd_even[10];
        is_palindrome(word, palindrome);
        is_odd_even(num, odd_even);
        fprintf(ofp, "%s %s", palindrome, odd_even);
    }
    fclose(ifp);
    fclose(ofp);
}
void is_palindrome(char word[], char verdict[])
{
    int i = 0 , j = strlen(word)-1;
    while(i<=j)
    {
        if(word[i] != word[j])
        {
            sprintf(verdict, "Not-Palindrome");
            return;
        }
        i++;
        j--;
    }
    sprintf(verdict, "Palindrome");
}
void is_odd_even(int num, char verdict[])
{
    if(num%2==0)
    {
        sprintf(verdict, "Even\n");
    }
    else sprintf(verdict, "Odd\n");
}