#include <stdio.h>
#include <string.h>
typedef struct
{
    int id;
    char name[50];
} student;

int main()
{
    student a[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%s", a[i].name);
        scanf("%d", &a[i].id);
    }
    int swap = -1;

    while (swap != 0)
    {
        swap =0;
        for (int i = 0; i < 4; i++)
        {
            if (strcmp(a[i].name, a[i + 1].name) == 1)
            {
                student temp;
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
                swap = 1;
            }
            else if (strcmp(a[i].name, a[i + 1].name) == 0)
            {
                if (a[i].id > a[i + 1].id)
                {
                    student temp;
                    temp = a[i];
                    a[i] = a[i + 1];
                    a[i + 1] = temp;
                    swap = 1;
                }
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%s %d\n", a[i].name, a[i].id);
    }

}