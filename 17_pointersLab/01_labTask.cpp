#include<iostream>
using namespace std;
int main()
{
    int arr1[5] = {1,2,3,4,5}, arr2[5] = {1,2,3,4,5}, arr3[5];
    // int *ptr1,*ptr2,*ptr3;
    for(int i=0; i<5; i++)
    {
        // THREE DIFFERENT WAYS TO DO THIS
        
        // *(&arr3[i])= *(&arr1[i]) + *(&arr2[i]) ;
        
        // ptr1 = &arr1[i];
        // ptr2 = &arr2[i];
        // ptr3 = &arr3[i];
        // *ptr3 = *ptr1 + *ptr2; 
        
        *(arr3+i)= *(arr1+i) + *(arr2+i) ;
        cout<<arr3[i]<<" ";
    }
    return 0;
}