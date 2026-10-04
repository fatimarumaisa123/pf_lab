#include <stdio.h>
#include <math.h>
int main() 
{
    int num,n,temp,rev=0;
    printf("input a number: ");
    scanf("%d",&num);
    n=num;
     while(num!=0)
    {
       temp=num%10;
       rev=temp+rev*10;
       num=num/10;
    }
    printf("%d",rev);
    if (rev==n)
    printf("palindrome");
    else
    printf("not a palindrome");
   
return 0;
}