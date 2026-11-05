#include <stdio.h>
int main() 
{
    int img [3][3];
    int (*ptr)[3] = img;
    printf("input the value for all pixels: ");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("pixel[%d][%d]",i,j);
            scanf("%d",*(ptr + i)+j);
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           *(*(ptr + i) + j) *= 2;
        }
    }
      for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",*(*(ptr + i)+j));
        }
        printf("\n");
    }


return 0;
}