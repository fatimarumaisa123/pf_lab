#include <stdio.h>
int main() 
{
    int a,b,c;
    printf("input three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    if((a>b)&&(a>c))
    printf("%d is the gteatest",a);
    else if((b>a)&&(b>c))
   printf("%d is the gteatest",b);
    else if((c>a)&&(c>b))
    printf("%d is the gteatest",c);
    else if ((a==b)&&(a>c))  
    printf("%d and %d are equal and are the greatest.", a, b);
    else if ((a==c)&&(a>b))
    printf("%d and %d are equal and are the greatest.", a, c);
    else if ((b==c)&&(b>a))
    printf("%d and %d are equal and are the greatest.", b, c);
    else
    printf("All three numbers are equal and are the greatest.");
    

return 0;
}