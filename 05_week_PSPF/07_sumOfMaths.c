//* Sum of first 10 natural numbers
//
#include <stdio.h>
int main() {
    int num;
    int sum;
    printf("Sum of first _____ natural number :  ");
    scanf("%d",&num);
    sum = (num*(num+1))/2;
    printf("%d",sum); 
}