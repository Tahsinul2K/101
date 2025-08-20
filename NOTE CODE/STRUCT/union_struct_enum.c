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
    student rahim;
    rahim.id = 214;
    rahim.decision = MARK;
    scanf("%d",&rahim.info.mark);
    scanf("%f",&rahim.info.gpa);
    printf("%d %f",rahim.info.mark, rahim.info.gpa);
}
// FACT: in union the members will share the same space