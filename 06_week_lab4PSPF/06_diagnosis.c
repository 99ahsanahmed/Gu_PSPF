//Task 6: Medical Diagnosis Checker
#include <stdio.h>
int main() {
    char fev,cou,sans;
    printf("do you have fever y/n : \n");
    scanf(" %c",&fev);
    printf("do you have cough y/n : \n");
    scanf(" %c",&cou);
    //cough fever == yesy
    if (fev=='y' && cou=='y'){
        printf("do you have short breadth y/n : \n");
        scanf(" %c",&sans);
        //cough fever breath == yes
        if (sans=='y')
        {
            printf("Likely COVID-19; consult a doctor.");
        }
        printf("Likely cold or flu.");
    }else if(cou=='y'){
        printf("Likely a minor throat infection.");
    }else{
        printf("You good!");
    }
}