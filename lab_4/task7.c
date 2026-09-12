#include <stdio.h>

int main()
{
    float data, price, basicCost, discountAmount, finalCost, discountRate ;
    printf("Enter data used in GB: ");
    scanf("%f", &data);
    printf("Enter price per GB: ");
    scanf("%f", &price);
    basicCost = data * price;
    if (data < 50)
        discountRate = 0;
    else if (data < 100)
        discountRate = 5;
    else if (data < 200)
        discountRate = 10;
    else
        discountRate = 15;
    discountAmount = basicCost * discountRate / 100;
    finalCost = basicCost - discountAmount;
    printf("Basic Cost = %.2f\n", basicCost);
    printf("Discount Amount = %.2f\n", discountAmount);
    printf("Final Cost = %.2f", finalCost);

    return 0;
}