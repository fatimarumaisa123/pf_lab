#include <stdio.h>
int main() 
{
    int category,subcategory;
    printf ("select: \n1.animal\n2.vehicle\n3.food\n4.human\n");
    scanf("%d",&category);
    switch (category)
    {
    case 1:
        printf ("select: \n1.cat\n2.dog\n3.bird\n");
        scanf("%d",&subcategory);
        switch (subcategory)
        {
        case 1:
            printf("you selected: category-animal and subcategory-cat");
            break;
        case 2:
            printf("you selected: category-animal and subcategory-dog");
            break;   
        case 3:
            printf("you selected: category-animal and subcategory-bird");
            break;  
        default:
        printf("invalid choice"); 
          
        }
         break; 
    case 2:
        printf ("select:\n1.car\n2.bus\n3.bike\n");
        scanf("%d",&subcategory);
        switch (subcategory)
        {
        case 1:
            printf("you selected: category-vehicle and subcategory-car");
            break;
        case 2:
            printf("you selected: category-vehicle and subcategory-bus");
            break;   
        case 3:
            printf("you selected: category-vehicle and subcategory-bike");
            break;
        default:
        printf("invalid choice");    
        
        }
         break; 
    case 3:
        printf ("select: \n1.pizza\n2.burger\n3.biryani\n");
        scanf("%d",&subcategory);
        switch (subcategory)
        {
        case 1:
            printf("you selected: category-food and subcategory-pizza");
            break;
        case 2:
            printf("you selected: category-food and subcategory-burger");
            break;   
        case 3:
            printf("you selected: category-food and subcategory-biryani");
            break;
        default:
        printf("invalid choice");      
         
        }
         break; 
      case 4:
        printf ("select: \n1.male\n2.female\n3.child\n");
        scanf("%d",&subcategory);
        switch (subcategory)
        {
        case 1:
            printf("you selected: category-human and subcategory-male");
            break;
        case 2:
            printf("you selected: category-human and subcategory-female");
            break;   
        case 3:
            printf("you selected: category-human and subcategory-child");
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