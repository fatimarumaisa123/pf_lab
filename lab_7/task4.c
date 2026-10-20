#include <stdio.h>
#include <string.h>
int main()
{
    char word_grid[3][100];
    printf("Enter:\n");
    for (int i=0;i<3;i++)
    {
        scanf(" %99[^\n]", word_grid[i]);
    }
    int row=0,column=0,len=0,start=0;
    for (int i=0;i<3;i++)
    {
        int k=0;
        int counter = 0;
        int n = strlen(word_grid[i]);
        while (k<n)
        {
            while (k<n && word_grid[i][k] == ' ')
                k++;
            if (k>=n)
                break;
            int s=k;
            while (k<n && word_grid[i][k] != ' ')
                k++;
            int length = k-s;
            if (length > len)
            {
                row = i;
                column = counter;
                len = length;
                start = s;
            }
            

            counter++;
        }
    }

    printf("\nWord with greatest length: %.*s\n",len, word_grid[row] + start);
    printf("row index: %d\n", row);
    printf("column index: %d\n", column);
    
    return 0;
}