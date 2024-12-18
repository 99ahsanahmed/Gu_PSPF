#include<iostream>
using namespace std;
int main()
{
    int max,min;
    int arr[3]={2,3,6};
    for (int i = 0; i < 3; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];//2  || 3 || 6
        }
        if (arr[i]<min)
        {
            min=arr[i];
        }
    }
    cout<<max<<endl;
    cout<<min;
    
    return 0;
}