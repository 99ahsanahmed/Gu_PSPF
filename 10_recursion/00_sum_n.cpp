#include <iostream>
using namespace std;
int sum (int n){
    if (n==0) return 0;
    return n+sum (n-1); 
}
int main (){
    int num;
    cout << "enter any number: ";
    cin >> num;

    cout << "Sum of numbers: "<<sum(num)<<endl;
    return 0;
}
