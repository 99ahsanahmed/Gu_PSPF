#include <iostream>
using namespace std;
int main() {
    cout<<"even number: "<<endl;;
    for (int j = 2; j <=10; j=j+2)
    {
        cout<<j <<endl;   
    }
    cout<<"sum of first 10 natural numbers: "<<endl;
    int sum=0;
    for (int z = 1;z <=10 ; z++)
    {
        sum =sum+z; 
    }
        cout<<sum;
    return 0;
}
