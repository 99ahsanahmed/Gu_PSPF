#include<iostream>
using namespace std;
int evenNum(int n){
    if (n<1)
    {
        return 1;
    }
    if (n%2 == 0)
    {
        cout<<n<<" ";
    }
    return evenNum(n-1);
}
int main()
{
    int n=11;
    cout<<evenNum(n);
    return 0;
}