//Task 4: Counting Even Numbers using recursion from 1 to N
#include<iostream>
using namespace std;
void even(int num){ // uptill 10
    if (num==0) return;   
    even(num-1);
    if (num%2==0)
    {
        cout<<num<<endl;
    }
}
int main()
{
    int num=10;
    cout<<"even numbers till "<<num<<" :"<<endl;
    even(num);// -> uptill 10
    return 0;
}