//  What is the difference between ptr++ and (*ptr)++?
#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3};
    int *ptr = arr;
    ptr++;     // ptr++ moves the pointer to the next element of an array
    for (int i = 0; i < 3; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    (*ptr)++;  // whereas (*ptr)++ adds 1 to the value of the element the pointer is pointing to
    for (int i = 0; i < 3; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}