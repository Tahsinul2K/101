#include <stdio.h>
typedef union
{
    int mark;
    float gpa;

} result;

typedef enum
{
    MARK,
    GPA
} result_type;

typedef struct
{
    int id;
    result_type decision;
    result info;
    
} student;

int main()
{
    student abid = {23, MARK , {.mark = 34}};

}