#include <stdio.h>
int main()
{
    int shifts[4][3];
    int index;
    printf("input array:\n");
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            printf("input[%d][%d]: ",i,j);
            scanf("%d", &shifts[i][j]);
        }
    }

    printf("insertion row?:\n");
    scanf("%d", &index);
    for (int i = 3; i > index; i--)
    {
        for (int j = 0; j < 3; j++)
        {
            shifts[i][j] = shifts[i - 1][j];
        }
    }
    printf("Enter 3 new production values: ");
    for (int i=0;i<3;i++)
    {
        printf("[%d][%d]",index,i);
        scanf("%d", &shifts[index][i]);
    }
    printf("\nUpdated production matrix:\n");
    for (int i=0;i<4;i++)
    {
        for (int j=0;j<3;j++)
        {
            printf(" %d ", shifts[i][j]);
        }
        printf("\n");
    }

    return 0;
}