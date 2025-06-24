#include<stdio.h>
typedef struct student{
    char name[20];
    int roll;
    int enrollment;
    char grade;
}student;

int main(){

     student student_data[2];
    for (int i=0;i<2;i++){
        printf("Enter the name: ");
        scanf(" %[^\n]s",student_data[i].name);
        printf("Enter the Roll no: ");
        scanf("%d",&student_data[i].roll);
        printf("Enter the Enrollment no: ");
        scanf("%d",&student_data[i].enrollment);
        printf("Enter the Grade:");
        scanf(" %c",&student_data[i].grade);
    }

    printf("Student data:\n");
    for (int i=0;i<2;i++){

        printf("The name: %s \n",student_data[i].name);
        printf("The Roll no: %d\n",student_data[i].roll);
        printf("The Enrollment no: %d \n",student_data[i].enrollment);
        printf("The Grade: %c\n",student_data[i].grade);
    }
    return 0;
}
