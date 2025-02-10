#include <iostream>
using namespace std;
int digi_count (int n){
    if (n==0) return 0;//  1234 //1234    /123  /12  /1   /0
    return 1+digi_count (n/10); //1   + (1+     (1+  (1)  0))
}
int main (){
    int num;
    cout << "enter any number to count digitd : ";
    cin >> num;

    cout << "total digits are: "<<digi_count(num)<<endl;
    return 0;
}
