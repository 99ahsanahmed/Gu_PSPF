#include <iostream>
using namespace std;
int digi_count (int n){
    if (n==0) return 0;
    return 1+digi_count (n/10); 
}
int main (){
    int num;
    cout << "enter any number to count digitd : ";
    cin >> num;

    cout << "total digits are: "<<digi_count(num)<<endl;
    return 0;
}
