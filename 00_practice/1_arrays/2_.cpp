// Medium
// Problem: Find the Second Largest Element Write a function to find the second largest element in an array. You should handle cases where the array has less than two elements by returning an appropriate message or value.
#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,4,7,9,2},max=0,max2=0;
    for (int i = 0; i < 5; i++)
    {
        if (max<arr[i])
        {
            max = arr[i];
        }
    }
    for (int j = 0; j < 5; j++)
    {
        if (!(max == arr[j]))
        {
            if (max2<arr[j])
            {
                max2=arr[j];
            }
        }
    }
    
    
    return 0;
}