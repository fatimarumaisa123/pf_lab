#include <stdio.h>
int main() 
{
    int total, missing , duplicate;
    float missingPercentage;
    printf ("input Total number of records: ");
    scanf("%d",&total);
    printf ("input Total number of missing records: ");
    scanf("%d",&missing);
     printf ("input Total number of duplicate records: ");
    scanf("%d",&duplicate);
        if (total <= 0)
        printf("Invalid Dataset");
    else
    {
        missingPercentage = (missing * 100.0) / total;
        printf("Missing data percentage = %.2f\n", missingPercentage);}
        if (missingPercentage > 30)
            printf("Poor Quality Dataset");
        else if ((duplicate * 100.0 / total) > 20)
            printf("Dataset Requires Cleaning");        
        else
        printf("Dataset Ready for Training");
    

return 0;
}