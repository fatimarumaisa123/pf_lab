#include <stdio.h>
int main() 
{
     int num,n2=1,n1,n=1,c;
  
    printf("input a number: ");
    scanf("%d",&num);
    n1=num+1;
    for(int i=1;i<=2*num;i++) 
    {
        
        n2=n2*i;

    } 
    
     for(int i=num;i>0;i--) 
    {
     n1=n1*i;

    }
    for(int i=num;i>0;i--)
    {
        n=n*i;

    }
    c=n2/(n1*n);
    printf("catalan number: %d",c);




return 0;
}