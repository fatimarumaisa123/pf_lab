#include <stdio.h>
int main() 
{
    int std=30 , attendance , present =0 , absent =0,counter=1 ;
    for(int i=1;i<=std/2;i++)
    {
        printf("input attendance for student %d (1 for present 0 for absent): ", counter);
        scanf("%d",&attendance);
        counter++;
        if(attendance==1)
        present++;
        else 
        absent++;
        printf("input attendance for student %d (1 for present 0 for absent): ", counter);
        scanf("%d",&attendance);
        counter++;
        if(attendance==1)
        present++;
        else 
        absent++;
    }
    printf("present= %d , absent= %d ",present,absent);

return 0;
}