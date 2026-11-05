#include <stdio.h>
#include <string.h>
void withdraw(int *balance, int withdraw)
{
    if(withdraw>*balance)
    printf("Transaction Declined:Insufficient Balance");
    else 
    {
        *balance=*balance-withdraw;
        printf("withdrawl amount: %d",withdraw);
    }
}
void deposit (int *balance, int deposit)
{
    *balance=*balance+deposit;
    printf("deposited amount: %d",deposit);


}
int main()
{
    char transtype[15];
    printf ("input the type of transaction:");
    scanf ("%s",transtype);
    int balance=50000; 
    int w,d;
    if(strcmp(transtype, "withdraw") ==0)
    {
        printf ("input the amount to withdraw: "); 
        scanf ("%d",&w);
        withdraw(&balance,w);
    }
    else if (strcmp(transtype,"deposit")==0)
    {
        printf("input the amount to debit: ");
        scanf("%d",&d);
        deposit(&balance,d);
    }
    else 
    printf("invalid input");
    printf("the final account balance is: %d",balance);
}