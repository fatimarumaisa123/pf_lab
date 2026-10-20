#include <stdio.h>
int main() 
{
    int count =0;
    char logs [3][30];
   int k=0;
   printf("input CSV log entry: ");
   scanf("%29[^,]%*c%29[^,]%*c%29[^\n]", logs[0], logs[1], logs[2]);
   for (int i=0;i<3;i++)
   {
    for(int j=0;logs[i][j]!='\0';j++)
{
    if (logs[i][j]>='A'&&logs[i][j]<='Z')
            {
                count++;
            }
}   }
printf("capital letters count: %d",count);
return 0;
}