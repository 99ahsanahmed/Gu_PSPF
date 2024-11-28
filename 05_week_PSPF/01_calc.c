//* SIMPLE CALCULATOR
#include <stdio.h>
int main() {
    int num1;
    int num2;
    int sum;
    char opr;
    printf("Enter an operator: ");
    scanf("%c", &opr);

    printf("Enter an first number: ");
    scanf("%d", &num1);

    printf("Enter an second number: ");
    scanf("%d", &num2);

    if(opr == '+'){
        sum = num1 + num2;
    }
    else if (opr == '-')
    {
        sum = num1 - num2;
    }
    else if (opr == '*')
    {
        sum = num1 * num2;
    }
    
       printf("%d" , sum);
    return 0;
}
