#include <stdio.h>
int main() 
{
    int age;
    float height;
    char grade;
    printf("enter age: ");
    scanf("%d",&age);
    printf("enter height: ");
    scanf("%f",&height);
    getchar();
    printf("enter grade: ");
    grade=getchar();
    printf("Age: %d \nHeight %.2f \nGrade: %c",age,height,grade);



return 0;
}