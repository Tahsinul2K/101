#include <stdio.h>
#include <string.h>
typedef struct
{
    char name[50];
    int id;
    char grade;
} student;
float avg(student a[], int n)
{
    int total = 0;
    for (int i = 0; i < n; i++)
    {

        switch (a[i].grade)
        {
        case 'A':
            total += 4;
            break;
        case 'B':
            total += 3;
            break;
        case 'D':
            total += 2;
            break;
        }
    }
    return (float)total/n ;
}
int main()
{
    int n;
    scanf("%d", &n);
    student s[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%s", s[i].name);
        scanf("%d", &s[i].id);
        getchar();
        scanf("%c", &s[i].grade);
    }

    int swap = -1;
    while (swap != 0)
    {
        swap = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i].grade > s[i + 1].grade)
            {
                student temp = s[i];
                s[i] = s[i + 1];
                s[i + 1] = temp;
                swap = 1;
            }
            else if (s[i].grade == s[i + 1].grade)
            {
                if (strcmp(s[i].name, s[i + 1].name) == 1)
                {
                    student temp = s[i];
                    s[i] = s[i + 1];
                    s[i + 1] = temp;
                    swap = 1;
                }
            }
        }
    }
    printf("\n\nOUTPUT:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", s[i].name);
        printf("%d\n", s[i].id);
        printf("%c\n", s[i].grade);
    }
    printf("%f", avg(s, n));
}