#include<iostream>
#include<cmath>
using namespace std;
int Power_Consumption(int volt , int resist){
    return(pow(volt,2))/resist;
}
int main()
{
    cout<<Power_Consumption(120,50);
    return 0;
}