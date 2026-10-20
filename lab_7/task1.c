#include <stdio.h>
int main() 
{
    char name [3][50];
    int marks [3][3];
    float avg;
    int sum;
    for(int i=0;i<3;i++)
    {
        printf("input name for student %d: ",i+1);
        scanf(" %[^\n]",name[i]);
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("input marks for subject %d for student %s: ",j+1,name[i]);
            scanf("%d",&marks[i][j]);

        }
    }
   for(int i=0;i<3;i++)
    { 
        avg=0;
        sum=0;
        for(int j=0;j<3;j++)
        {
           sum=sum+marks[i][j];
        }
        avg=sum/3;
        printf("\nNAME: %s\tAVERAGE: %.2f",name[i],avg);

    }    

return 0;
}