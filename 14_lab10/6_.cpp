#include<iostream>
#include<cmath>
using namespace std;
float diagonal_square(int length){
    return sqrt(2)*length;
}
int main()
{ 
    cout<<diagonal_square(10)<<" meter";
    return 0;
}