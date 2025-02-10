#include<iostream>
using namespace std;
void bubbleSort(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    return;
}
void sorted(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return;
}

int findMinIndex(int arr[],int n,int start){
    int min=10000,minIndex;
    for (int i = start + 1; i < n; i++)
    {
        if (min>arr[i])
        {
            min=arr[i];
            minIndex=i;
        }
    }
    return minIndex;
}
void selectionSort(int arr[],int ns){
    for (int i = 0; i < ns; i++)
    {
        int minIndex = findMinIndex(arr,ns,i);
        if (minIndex != i)
        {
            int temp = arr[i];
            arr[i]=arr[minIndex];
            arr[minIndex] = temp;
        }
    }
    for (int j = 0; j < ns; j++)
    {
        cout<<arr[j]<<" ";
    }
    return;
}
int main()
{
    int arr[8]={9,3,6,2,6,3,2,1};
    int n = sizeof(arr)/sizeof(int);
    // bubbleSort(arr,n);
    // sorted(arr,n);

    int arrSelect[]={9,2,3,4,78,6};
    int ns = sizeof(arrSelect)/sizeof(int);
    selectionSort(arrSelect,ns);
    // selectionSort();

    return 0;
}