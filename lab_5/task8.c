#include <stdio.h>
int main() 
{
    int permission;
    printf("input permission value: ");
    scanf("%d",&permission);
    if (permission!=0)
    {
     if ((permission&2) && (permission&8))
    printf("both training and deployment allowed\n");
    else if(permission&2 )
    printf("training allowed\n");
    else if(permission&8)
    printf("deployment allowed\n");
    if(permission&4 )
    printf("testing allowed\n");
    if(permission&1)
    printf("viewing allowed");
    }
    else 
    printf("nothing is alllowed");
    
    
    

return 0;
}