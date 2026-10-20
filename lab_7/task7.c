#include <stdio.h>
int main()
{
    float sensor_data[3][4] = {{12,45,32,78},{34,65,23,97},{16,44,32,85}};
    int ind;
    printf("enter the defctive column: ");
    scanf("%d", &ind);
    for (int i=0;i<3;i++)
    {
        for (int j=ind;j<3;j++)
        {
            sensor_data[i][j]=sensor_data[i][j+1];
        }
    }
    printf("\nupdated matrix:\n");
    for (int i=0; i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            printf(" %.2f ",sensor_data[i][j]);
        }
        printf("\n");
    }

    return 0;
}