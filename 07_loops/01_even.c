#include <stdio.h>
int main() {
    int num=10;
    printf("enter number: ");
    scanf("%d",&num);
    for (int j = 2; j <=num; j=j+2)
    {
        printf("%d \n",j);   
    }
    return 0;
}
