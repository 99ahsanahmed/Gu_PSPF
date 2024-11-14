//Task 2: Admission Eligibility
#include <stdio.h>
int main() {
    int math;
    int sci;
    int score;
    printf("Maths score : ");
    scanf("%d",&math);
    printf("Science score : ");
    scanf("%d",&sci);
    printf("Entry test score : ");
    scanf("%d",&score);
    if (math>=60 && sci>=60)
    {
        if (score>=80)
        {
            printf("Eligible for admission");
        }
    }
    else{
        printf("Not at all eligible for admission");
    }
}
