#include<iostream>
using namespace std;
int main()
{
    int arr1[4]={1,2,3,4};
    int arr2[4]={1,2,3,4};
    for (int i = 0; i <=4; i++)
    {
        cout<<arr1[i]*arr2[i];
        cout<<endl;
    }
    return 0;
}