#include <stdio.h>
#include <string.h> 
int main() 
{
    char fb[100];
    char *at;
    printf("input your feedback: ");
    fgets(fb,99,stdin);
    printf("the total number of charcters are: %d\n",strlen(fb));
    if(strstr(fb,"good"))
    printf("good review");
    else if (strstr(fb,"bad"))
    {
        at=strstr(fb,"bad");
        strcpy(at,"not good");
        printf("%s",fb);
    }
return 0;
}