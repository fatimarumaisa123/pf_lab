#include <stdio.h>
int add(int a,int b)
{
    return a+b;
}
int multiply(int a,int b)
{
    return a*b;
}
int findMax(int a,int b)
{
    if (a>b)
    return a;
    if(b>a)
    return b;
}
int compute(int a,int b,int (*per)(int,int))
{
    return per(a,b);
}

int main() 
{
    int n1,n2;
    printf("input two numbers: ");
    scanf("%d %d",&n1,&n2);
    printf("%d\n",compute(n1,n2,add));
    printf("%d\n",compute(n1,n2,multiply));
    printf("%d\n",compute(n1,n2,findMax));

    
return 0;
}