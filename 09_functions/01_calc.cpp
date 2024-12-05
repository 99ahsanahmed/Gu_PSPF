#include<iostream>
using namespace std;
int calculateSimpleInterest(double prin,double rateOfInterest,double time){
    double simple_interest=0;
    simple_interest=(prin*rateOfInterest*time)/100;
    return simple_interest;
}
int main()
{
    cout << calculateSimpleInterest;
    return 0;
}