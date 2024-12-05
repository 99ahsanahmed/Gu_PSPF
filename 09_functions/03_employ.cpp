#include<iostream>
using namespace std;
float calSalary(float hrWork, float hrRate){
    float salary= hrWork * hrRate;
    return salary;
}
float calc_bonus(float salary){
    float bonus_rate;
    cout<<"bonus rate: ";
    cin>>bonus_rate;
    float bonus =salary * bonus_rate;
    return  bonus;
}
float calcDeduc(float salary){
    float deduc_rate,deductions;
    cout<<"deduc rate: ";
    cin>> deduc_rate;
    deductions = salary * deduc_rate;
    return deductions;

}
int main()
{
    float hour_work,hour_rate,total_salary;
    cout<<"hour_work";
    cin>>hour_work;
    cout<<"hour_rate";
    cin>>hour_rate;
    cout<<"total salary: "<< calSalary(hour_work,hour_rate) + calc_bonus(calSalary(hour_work,hour_rate)) - calcDeduc(calSalary(hour_work,hour_rate));
    
    return 0;
}