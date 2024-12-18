#include<iostream>
using namespace std;
int main()
{
    int num_search;
    int arr[4]={1,2,3,4};
    cin>>num_search;
    for (int i = 0; i < 4; i++)
    {
        if (num_search == arr[i])
        {
            cout<<i;
        }
        else{
            cout<<"not found";
        }        
    }
    
    return 0;
}