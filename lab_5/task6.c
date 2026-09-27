#include <stdio.h>
int main() 
{
    int category,subcategory;
    printf ("select: \n1.classification\n2.regression\n3.clustering\n4.computer vision\n");
    scanf("%d",&category);
    switch (category)
    {
    case 1:
        printf ("select: \n1.Logistic Regression\n2.Decision Tree\n3.KNN\n");
        scanf("%d",&subcategory);
        switch (subcategory)
        {
        case 1:
            printf("you selected: category-classification and subcategory-Logistic Regression");
            break;
        case 2:
            printf("you selected: category-classification and subcategory-Decision Tree");
            break;   
        case 3:
            printf("you selected: category-classification and subcategory-KNN");
            break;  
        default:
        printf("invalid choice"); 
          
        }
         break; 
    case 2:
        printf ("select:\n1.Linear Regression\n2.Polynomial Regression\n3. SVR\n");
        scanf("%d",&subcategory);
        switch (subcategory)
        {
        case 1:
            printf("you selected: category-Regression and subcategory-Linear Regression");
            break;
        case 2:
            printf("you selected: category-Regression and subcategory-Polynomial Regression");
            break;   
        case 3:
            printf("you selected: category-Regression and subcategory- SVR");
            break;
        default:
        printf("invalid choice");    
        
        }
         break; 
    case 3:
        printf ("select: \n1.K-Means\n2.Hierarchical Clustering\n3.DBSCAN\n");
        scanf("%d",&subcategory);
        switch (subcategory)
        {
        case 1:
            printf("you selected: category-Clustering and subcategory-K-Means");
            break;
        case 2:
            printf("you selected: category-Clustering and subcategory-Hierarchical Clustering");
            break;   
        case 3:
            printf("you selected: category-Clustering and subcategory-DBSCAN");
            break;
        default:
        printf("invalid choice");      
         
        }
         break; 
      case 4:
        printf ("select: \n1.CNN\n2.YOLO\n3.R-CNN\n");
        scanf("%d",&subcategory);
        switch (subcategory)
        {
        case 1:
            printf("you selected: category-Computer Vision and subcategory-CNN");
            break;
        case 2:
            printf("you selected: category-Computer Vision and subcategory-YOLO");
            break;   
        case 3:
            printf("you selected: category-Computer Vision and subcategory-R-CNN");
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