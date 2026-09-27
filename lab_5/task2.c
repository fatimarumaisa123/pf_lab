#include <stdio.h>
int main() 
{
int age,income,credit_s;
char ex_loan;
printf("input your age: ");
scanf("%d",&age);
printf("input your income: ");
scanf("%d",&income);
printf("input your credit score: ");
scanf("%d",&credit_s);
getchar();
printf("any existing loan? (y/n): ");
scanf("%c",&ex_loan);
if (age>=21 && income>=100000 && credit_s>=750 && ex_loan=='n')
printf("High Approval Chance");
else if (age>=21 && income>=75000 && credit_s>=650 && ex_loan=='y')
printf("Manual review");
else if (age>=21 && income>=50000 && credit_s>=600 )
printf("possibly eligible");
else 
printf("Rejected: Does not meet any of the above criteria");


return 0;
}