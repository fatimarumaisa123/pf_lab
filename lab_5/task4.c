#include <stdio.h>
int main() 
{
    int category,subcategory;
    printf ("select: \n1.greeting\n2study\n3.weather\n4.help\n");
    scanf("%d",&category);
    switch (category)
    {
    case 1:
        printf ("select: \n1.hello\n2.how are you\n3.goodbye\n");
        scanf("%d",&subcategory);
        switch (subcategory)
        {
        case 1:
            printf("hello! nice to meet you");
            break;
        case 2:
            printf("I am doing well. How are you?");
            break;   
        case 3:
            printf("Goodbye! Have a great day");
            break;  
        default:
        printf("invalid choice"); 
          
        }
         break; 
    case 2:
        printf ("select:\n1.programming\n2.mathematics\n3.ai\n");
        scanf("%d",&subcategory);
        switch (subcategory)
        {
        case 1:
            printf("learn coding");
            break;
        case 2:
            printf("learn calculus");
            break;   
        case 3:
            printf("learn prompt engineering");
            break;
        default:
        printf("invalid choice");    
        
        }
         break; 
    case 3:
        printf ("select: \n1.today\n2.tomorrow\n3.forecast\n");
        scanf("%d",&subcategory);
        switch (subcategory)
        {
        case 1:
            printf("todays weather selected");
            break;
        case 2:
            printf("tomorrow selected");
            break;   
        case 3:
            printf("forecast selected");
            break;
        default:
        printf("invalid choice");      
         
        }
         break; 
      case 4:
        printf ("select: \n1.about chatbot\n2.commands\n3.exit\n");
        scanf("%d",&subcategory);
        switch (subcategory)
        {
        case 1:
            printf("hi i am a chatbot");
            break;
        case 2:
            printf("command?");
            break;   
        case 3:
            printf("exit!!");
            break;
        default:
        printf("invalid choice");  
          
        }
         break; 
    default:
    printf("invalid choice");
        break;
    }
return 0;
}