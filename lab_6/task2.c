#include <stdio.h>
int main() 
{
    int num,dig=0,n;
    printf("input a number: ");
    scanf("%d",&num);
    n=num;
    while(num!=0)
    {
        num=num/10;
        dig++;
    }
    
    for(int i=dig;n>0;i--)
    {
        printf("%d",n%10);
        n=n/10;
    }

return 0;
}