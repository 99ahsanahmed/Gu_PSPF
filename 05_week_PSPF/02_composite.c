//* COMPOSITE OF THREE
#include <stdio.h>
int main() {
    int num1;
    int num2;
    int num3;
    printf("Enter first number");
    scanf("%d",&num1);
    printf("Enter second number");
    scanf("%d",&num2);
    printf("Enter third number");
    scanf("%d",&num3);
    if (num1>num2 && num1>num3)
    {
        printf("First number is greatest");
    }
    else if (num2>num1 && num2>num3)
    {
        printf("second number is greatest");
    }
    else
        printf("third number is greatest");
    
    return 0;
}