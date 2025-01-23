#include<iostream>
using namespace std;
int main()
{
    int arr[6] = {5,6,7,8,9,6}, arrcpy[6];
    for (int i = 0; i < sizeof(arr)/sizeof(int); i++)
    {
        *(arrcpy+i) = *(arr+i); 
    }
    cout<<"Original array : "; 
    for (int j = 0; j < 6; j++)
    {
        cout<<arr[j]<<" ";
    }
    cout<<"\n Copied array : "; 
    for (int k = 0; k < 6; k++)
    {
        cout<<arrcpy[k]<<" ";
    }
    
    
    return 0;
}