#include <stdio.h>
typedef struct
{
    char name[50];
    int roll;
} student;

int main()
{
    student s1[5];
    for (int i = 0; i < 3; i++)
    {
        scanf(" %[^\n]s\n",s1[i].name);
        scanf("%d", &s1[i].roll);
    }
    printf("Student data\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", s1[i].name);
        printf("%d\n", s1[i].roll);
    }
    return 0;
}