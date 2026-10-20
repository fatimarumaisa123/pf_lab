#include <stdio.h>
int main()
{
    char secret_messages[3][100];
    int count, words;
    for(int i=0;i<3;i++)
    {
       printf("input secret message : ");
       scanf(" %99[A-Z ]%*[^\n]",secret_messages[i]); 
    }
    
   
    for (int i = 0; i < 3; i++)
    {
        words=0;
        for (int j=0;secret_messages[i][j]!='\0';j++)
        {
            if (secret_messages[i][j] != ' ' )
            {
                words++;
            }
        }

        printf("\nfiltered message: %s", secret_messages[i]);
        printf("\ncount: %d\n", words);
    }

    return 0;
}
