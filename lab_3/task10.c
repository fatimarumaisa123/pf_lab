#include <stdio.h>
int main() 
{
    char name[50],grade;
    int age;
    float cgpa,height;
    printf("enter name: ");
    fgets(name,50,stdin);
    printf("enter age: ");
    scanf("%d",&age);
    printf("enter height: ");
    scanf("%f",&height);
    getchar ();
    printf("enter grade: ");
    grade=getchar();
    printf("enter cgpa: ");
    scanf("%f",&cgpa);
    printf("\n===============STUDENT REPORT==============\n");
    printf("NAME : %s\n",name);
    printf("AGE : %d\n",age);
    printf("\nHEIGHT : %.2f\n",height);
    printf("\nGRADE : %c\n",grade);
    printf("\nCGPA: %.2f",cgpa);

return 0;
}