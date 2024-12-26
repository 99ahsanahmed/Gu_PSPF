#include <iostream>
using namespace std;
int gcd (int divident,int divisor ){
    if (divisor==0) return divident ;
    return gcd(divisor,(divident%divisor)); 
}
int main (){
    int divident=10,divisor=15 ;
    cout <<"enter first number: "; 
    cin >> divident;
    cout <<"enter second number: "; 
    cin >> divisor;
    cout << "gcd of two entered numbers is : "<< gcd(divident,divisor);
    }
