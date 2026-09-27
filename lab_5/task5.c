#include <stdio.h>
int main()
{
    int confidence;
    char user_type;
    printf("Enter  confidence: ");
    scanf("%d", &confidence);
    getchar();
    printf("Enter user type (A for Authorized, U for Unauthorized): ");
    scanf("%c", &user_type);

    if (confidence>=80)
    {
        printf("Face Recognized\n");

        if (user_type=='A')
        {
            printf("Access Granted\n");
        }
        else
        {
            printf("Access Denied\n");
        }
    }
    else if (confidence>=50)
    {
            if (user_type=='A')
            printf("Manual Verification Required\n");
            else 
            printf("access denied");
        
        
    }
    else 
         printf("asscess denied");
    


    return 0;
}

