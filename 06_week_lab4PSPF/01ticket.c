//Task 1: Movie Ticket Purchasing System in C
#include <stdio.h>
int main() {
    int choice;
    int opt1;
    int age;
    float fp;
    printf("\nOption 1: Purchase Ticket \nOption   2: Check Show Times \nOption 3: Exit: \n");
    scanf("%d",&choice);
    

    //*MAIN SWITCH
    switch (choice)
    {
    //OUTER CASE-1
    case 1:
        printf("Enter yout age: \n");
        scanf("%d",&age);
        printf(" \n1 for Regular Movie (base price $10) \n2 for Premium Movie (base price $15): \n");
        scanf("%d",&opt1);

        //*INNER SWITCH
        switch (opt1)
        {
        //INNER CASE-1
        case 1:
        if (age<12)
        {
            fp = 10 * 0.50;
            printf("50 percent discount for you,total: %.2f $",fp);
        }
        else if (age>12 && age<60)
        {
            fp = 10;
            printf("Your bill is %.2f $",fp);
        }
        else{
            fp = 10 * 0.70;
            printf("30 percent discount for you,total: %.2f $",fp);
        }
        break;
        //! INNER CASE-2
        case 2:
        if (age<12)
        {
            fp = 15 * 0.50;
            printf("50 percent discount for you,total: %.2f $",fp);
        }
        else if (age>12 && age<60)
        {
            fp = 15;
            printf("Your bill is %.2f $",fp);
        }
        else{
            fp = 15 * 0.70;
            printf("30 percent discount for you,total: %.2f $",fp);
        }

        break;
        
        default:
        printf("Invalid movie type");
            break;
        }
        break;
        //!OUTER-2
        case 2:
        printf("\nRegular Movie: 10:00 AM, 1:00 PM, 6:00 PM \nPremium Movie: 11:30 AM, 3:30 PM, 8:00 PM");
        break;

        //!OUTER-3
        case 3:
        printf("Have a nice day Sir/Madam");
        break;
    default:
        printf("invalid Option");
        break;
    }
}