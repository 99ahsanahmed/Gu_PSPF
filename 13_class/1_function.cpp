// Write a function that takes two dynamic arrays of varrying sizesas input and returns the Product of sum of both arrays
#include<iostream>
using namespace std;
int Pos(int *arr1,int *arr2,int size1,int size2){
    int sum1=0,sum2=0;
    for (int i = 0; i < size1; i++)
    {
        sum1 = sum1 + arr1[i];
    }
    for (int i = 0; i < size2; i++)
    {
        sum2 = sum2 + arr2[i];
    }
    return sum1*sum2;
}
void inputarr(int *arr,int size){
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter element "<<i<<" : ";
        cin>>arr[i];
    }
}
void displayarr(int *arr,int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int size1,size2;
    int *arr1,*arr2;
    cout<<"Enter the size of the first array"<<endl;
    cin>>size1;
    cout<<"Enter the size of the second array"<<endl;
    cin>>size2;
    arr1 = new int[size1];
    arr2 = new int[size2];
    cout<<"Enter the elements of the first array"<<endl;
    inputarr(arr1,size1);
    cout<<"Enter the elements of the second array"<<endl;
    inputarr(arr2,size2);
    cout<<"Displaying the first array : ";
    displayarr(arr1,size1);
    cout<<endl;
    cout<<"Displaying the second array : ";
    displayarr(arr2,size2);
    cout<<endl;
    cout<<"Product of sum of both arrays is : "<<endl;
    cout<<Pos(arr1,arr2,size1,size2);
    // Pos(arr1,arr2);
    return 0;
}