//Task 5: Grading System with Nested Conditions
// 4. If the score is below 60, grade is "D".
#include <stdio.h>
int main() {
    int score;
    printf("Enter your score: ");
    scanf("%d",&score);
    //A
    if (score>90)
    {
        printf("A");
    }
    //B
    if (score>=75 && score<=89)
    {if (score>=85)
      {
        printf("B+");
      }else{
        printf("B");
      }
    }
    //C
    if (score>60 && score<=74)
    {if (score>=70)
      {
        printf("C+");
      }else{
        printf("C");
      } 
    }
    //D
    if (score<60)
    {
        printf("D");
    }
}