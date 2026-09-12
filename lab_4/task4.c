#include <stdio.h>
int main() 
{
    int accuracy,latency,approval;
    printf("input accuracy: ");
    scanf("%d",&accuracy);
    printf("input latency: ");
    scanf("%d",&latency);
    printf("input approval (0/1): ");
    scanf("%d",&approval);
    if(accuracy >=90 && latency <= 100 && approval==1 )
    printf("model can be deployed");
    else if (accuracy<90||latency>100||approval==0)
    {
    if(accuracy<90)    
    printf("accuracy too low");
    if(latency >100)
    printf("latency too high");
    if(approval==0)
    printf("model not approved");
    }
return 0;
}