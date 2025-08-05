/*
You are to take input of the marks obtained by 10 students of a class of 5 subjects.
Show the names and total marks of the students obtaining the highest and lowest number.
You are not allowed to use array data type to store the marks and names of the students.
It is expected that file will be used to store the data to solve the problem.
*/
#include <stdio.h>
#include <string.h>
int main()
{
    FILE *ifp = fopen("file11_input.txt", "w");

    for (int i = 0; i < 3; i++)
    {
        char name[100];
        fgets(name, sizeof(name), stdin); //******
        int mark1, mark2, mark3, mark4, mark5;
        scanf("%d%d%d%d%d", &mark1, &mark2, &mark3, &mark4, &mark5);
        getchar();
        fputs(name, ifp);
        fprintf(ifp, "%d %d %d %d %d\n", mark1, mark2, mark3, mark4, mark5);
    }
    
    fclose(ifp);
    ifp = fopen("file11_input.txt", "r");
    FILE *ofp = fopen("file11_output.txt", "w");

    char line[100], topper[100], bottom[100];
    fgets(topper, sizeof(topper), ifp);
    strcpy(bottom, topper);

    int mark1, mark2, mark3, mark4, mark5;
    fscanf(ifp, "%d %d %d %d %d", &mark1, &mark2, &mark3, &mark4, &mark5);

    int max_sum = mark1 + mark2 + mark3 + mark4 + mark5;
    int low = max_sum;

    while (fgets(line, sizeof(line), ifp) != NULL)
    {
        fscanf(ifp, "%d %d %d %d %d", &mark1, &mark2, &mark3, &mark4, &mark5);
        int total = mark1 + mark2 + mark3 + mark4 + mark5;
        if (total > max_sum)
        {
            max_sum = total;
            strcpy(topper, line);
        }
        if (total < low)
        {
            low = total;
            strcpy(bottom, line);
        }
    }
    fputs(topper, ofp);
    fputs(bottom, ofp);
    fclose(ofp);
    fclose(ifp);
}