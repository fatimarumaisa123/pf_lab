#include <stdio.h>
int main() 
{
    int arr[8], min,max,ind;
    for(int i=0;i<8;i++)
    {
        printf("input the element in index %d: ",i);
        scanf("%d",&arr[i]);
    }
     for(int i=0;i<8;i++)
    {
        printf("arr[%d]= %d ",i,arr[i]);
       
    }
    min=arr[0];
    for(int i=0;i<8;i++)
    {
        if(arr[i]<min)
        min=arr[i];
    }
    printf("\nmin: %d",min);
    max=arr[0];
    for(int i=0;i<8;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    printf("\nmax: %d\n",max);
    printf("input the index number in which you want to input: ");
    scanf("%d",&ind);
    printf("input the number in index %d: ",ind);
    scanf("%d",&arr[ind]);
    printf("input the index number which you want to delete: ");
    scanf("%d",&ind);
    for(int i=ind;i<8;i++)
    {
        arr[i]=arr[i+1];
        
    }
     for(int i=0;i<7;i++)
    {
      printf("\n%d",arr[i]); 
    }

return 0;
}