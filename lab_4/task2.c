#include <stdio.h>
int main() 
{
    int cscore;
    printf("input a confidence score:");
    scanf("%d",&cscore);
    if(cscore>100 && cscore<0)
    printf("Invalid Score");
       else if (cscore>=0 && cscore<=49)
    printf("Low Confidence");
      else if (cscore>=50 && cscore<=79)
    printf("Moderate Confidence");
    else 
    printf("High Confidence");
      return 0;
}