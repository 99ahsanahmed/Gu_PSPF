#include <stdio.h>
int main() {
    int base;
    int hra;
    int othe;
    int deduc;
    int nsalary;
    printf("enter basic salary: \n");
    scanf("%d",&base);
    printf("enter House Rent Allowance: \n");
    scanf("%d",&hra );
    printf("enter Other Allowances: \n");
    scanf("%d",&othe);
    printf("enter Deductions: \n");
    scanf("%d",&deduc);
    nsalary= base+ hra + othe- deduc;
    printf("your net salary is %d",base);
    //bonus
    if (base>100)
    {
        printf("Bonus Eligibility: Eligible");
    }
    else{
        printf("Bonus Eligibility:Not Eligible");
    }
    return 0;   
}