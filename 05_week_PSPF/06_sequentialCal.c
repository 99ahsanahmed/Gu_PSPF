//* SEQUENTIAL OPERATION
#include <stdio.h>
int main() {
    int num1;
    int num2;
    int sum;
    int sub;
    int prod;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    sum = num1 + num2;
    sub = num1 - num2;
    prod = num1 * num2;
    printf("sum = %d ,\n subtraction = %d ,\n product = %d" , sum , sub , prod);    
}
