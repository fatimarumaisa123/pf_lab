#include <stdio.h>
float calculateDiscount(char cTyp,int bill){
    int discount;
    float discAmount;
    if (cTyp=='P')
    discount=20;
    else if (cTyp=='G')
    discount=10;
    else if (cTyp=='S')
    discount=5;
    else 
    discount=0;
    if (bill>10000)
    discount+=2;
    discAmount = bill*discount/100.0;
    return discAmount;

}
float calculateFinalBill(float discamount)
{
    float tax;
    float finalBill;
    tax = discamount*0.15;
    finalBill = discamount+tax;
    if (discamount <= 5000)
        finalBill += 300;

    return finalBill;
}
int main() 
{
    int bill;
    char type;
    printf("input the bill: ");
    scanf("%d",&bill);
    printf("input the cutomer type: ");
    scanf(" %c",&type);
    float waiver=calculateDiscount(type,bill);
    float discamount=bill-waiver;
    float finalBill= calculateFinalBill(discamount);
    printf("the final bill is %.2f",finalBill);

return 0;
}