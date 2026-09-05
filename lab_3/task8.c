#include <stdio.h>
int main() 
{
    char name[50];
    printf("input your name: ");
    fgets(name,50,stdin);
    printf("Hello, \n");
    puts(name);

return 0;
}