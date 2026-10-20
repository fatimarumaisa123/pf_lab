#include <stdio.h>
int main() 
{
    char sentences[3][100];
    for (int i = 0; i < 3; i++)
    {
        scanf(" %99[^;\n]%*c", sentences[i]);
    }
    printf("\nVowel count per sentence:\n");
    for (int i=0;i<3;i++) 
    {
        int vowels = 0;
        for (int j=0;sentences[i][j]!='\0';j++) 
        {
            char ch = sentences[i][j];
            if (sentences[i][j]=='a'||sentences[i][j]=='e'||sentences[i][j]=='i'||sentences[i][j]=='o'||sentences[i][j]=='u'
                || sentences[i][j]=='A'||sentences[i][j]=='E'||sentences[i][j]=='I'||sentences[i][j]=='O'||sentences[i][j]=='U') 
                vowels++;
        }
        printf("Sentence %d: %s\n",i+1,sentences[i]);
        printf("Vowels: %d\n", vowels);
    }

    return 0;
}