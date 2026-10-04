#include <stdio.h>
int main() 
{
    int num,dig=0,n,even=0 , odd=0;
    printf("input a number: ");
    scanf("%d",&num);
    n=num;
    while(num!=0)
    {
        n=num%10;
        num=num/10;
        if(n%2==0)
        even++;
        else
        odd++;
        
    }
    
   printf("even number: %d\nodd numbers: %d",even,odd);

return 0;
}