#include <stdio.h>
int main() 
{
    char p_name[50];
    int quantity;
    float price;
    printf("enter product name: ");
    fgets(p_name,50,stdin);
    printf("enter quantity: ");
    scanf("%d",&quantity);
    printf("enter price: ");
    scanf("%f",&price);
    printf("product name: %squantity: %d \nprice: %.2f",p_name,quantity,price);
    


return 0;
}