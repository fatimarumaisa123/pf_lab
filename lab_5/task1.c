#include <stdio.h>
int main() 
{
    int programming,maths,ai,attendance;
    printf("input marks of programming: ");
    scanf("%d",&programming);
    printf("input marks of maths: ");
    scanf("%d",&maths);
    printf("input marks of AI: ");
    scanf("%d",&ai);
    printf("input attendance percentage: ");
    scanf("%d",&attendance);
    if(programming>=50 && maths>=50 && ai>=50 && attendance>=75)
    {
        float avg=(maths+programming+ai)/3;
        if(avg>=80)
        printf("Excellent");
        else if(avg>=70)
        printf("very good");
        else if(avg>=60)
        printf("good");
        else if (avg>=50)
        printf("satisfactory");
        else 
        printf("poor");

    }
    else
    printf ("student is not eligible");


return 0;
}