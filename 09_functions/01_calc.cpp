#include<iostream>
using namespace std;
int calculateSimpleInterest(double prin,double rateOfInterest,double time){
    double simple_interest=0;
    simple_interest=(prin*rateOfInterest*time)/100;
    return simple_interest;
}
int main()
{
    double principal,rateOfInterest,time;
    cout<<"Principal: ";
    cin>>principal;
    cout<<"rate of interest:";
    cin>>rateOfInterest;
    cout<<"time:";
    cin>>time;
    cout << calculateSimpleInterest(principal,rateOfInterest,time);
    return 0;
}