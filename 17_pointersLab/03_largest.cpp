#include<iostream>
using namespace std;
int main()
{
    int largest=0;
    int arr1[5] = {1, 10, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        if (largest < *(arr1+i))
        {  
            largest = *(arr1+i);
        }
    }
    cout<<largest;
    return 0;
}