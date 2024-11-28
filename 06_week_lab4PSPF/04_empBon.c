//Task 4: Employee Bonus Calculation
#include <stdio.h>
int main() {
    int exp,bonus;
    char rat;
    printf("experience : ");
    scanf("%d",&exp);
    printf("rating from a ,b ,c : ");
    scanf(" %c",&rat);
    if (exp<=5)
    {
        bonus = 5;
        if (rat == 'a')
        {
            bonus = bonus + 5;
            printf("bonus is %d percent",bonus);
        }else if (rat == 'b')
        {
            bonus = bonus + 3;
            printf("bonus is %d percent",bonus);
        }else{
            printf("bonus is %d percent",bonus);
        };
    }
    else if (exp>5 && exp<10){
        bonus = 10;
        if (rat == 'a')
        {
            bonus = bonus + 5;
            printf("bonus is %d percent",bonus);
        }else if (rat == 'b')
        {
            bonus = bonus + 3;
            printf("bonus is %d percent",bonus);
        }else{
            printf("bonus is %d percent",bonus);
        }
    }
    else{
        bonus = 15;
        if (rat == 'a')
        {
            bonus = bonus + 5;
            printf("bonus is %d percent",bonus);
        }else if (rat == 'b')
        {
            bonus = bonus + 3;
            printf("bonus is %d percent",bonus);
        }else{
            printf("bonus is %d percent",bonus);
        }
    }
    
}