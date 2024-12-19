#include<iostream>
using namespace std;
void divisor(int num,int div){ 
    if (div>num) return;//If we dont want to print the number in divisor list then div>=num;It will not execute 6th value in this
    if (num%div==0)
    {
        cout<<div<<endl;
    }    
    divisor(num,div+1);
}
int main()
{
    int num=6,div=1;
    divisor(num,div);
    return 0;
}