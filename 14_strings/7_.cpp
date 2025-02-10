#include<iostream>
#include<cmath>
using namespace std;
float hypotenuse_rec(int left_side,int bottom_side){
    return sqrt(pow(left_side,2) + pow(bottom_side,2));
}
int main()
{
    cout<<hypotenuse_rec(12,16)<<" feet";
    return 0;
}