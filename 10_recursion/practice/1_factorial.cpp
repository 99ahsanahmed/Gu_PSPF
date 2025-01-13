#include<iostream>
using namespace std;
int factorial(int n){
    if(n<=0) return 0; //base case
    cout<<n-1<<" ,";
    return  factorial(n-1); //stack => 3 , 2 , 1
    //print => 1 , 2 , 3
}
int main()
{
    cout<<factorial(4);
    return 0;
}