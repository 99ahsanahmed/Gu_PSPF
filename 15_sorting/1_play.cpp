#include <iostream>
// #include <vector>
using namespace std;
// Bubble sort
void bubblesort(int *point_myarr , int n){
    for (int past = 0; past < n; past++)
    {
        for (int comp = 0; comp < n-1; comp++)
        {
            if (point_myarr[comp] > point_myarr[comp + 1] )// for > ascending
            {
                swap(point_myarr[comp],point_myarr[comp+1]);
            }
        }
    }
}

// Selection sort
int findMinIndex(int arr[], int start, int n) {
    int minIndex = start;
    for (int i = start + 1; i < n; ++i) {
        if (arr[i] < arr[minIndex]) { // i = 1 = arr[1] = 0 , minIndex = 0 = arr[0] = 3
            minIndex = i;
        }
    }
    return minIndex;
}

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        // Find the index of the minimum element in the unsorted part of the array
        int minIndex = findMinIndex(arr, i, n);
        
        // Swap the found minimum element with the first element of the unsorted part
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}
int main() {
    
    int myarr_bubble[5] = {3,4,7,1,2};
    int n = sizeof(myarr_bubble)/sizeof(myarr_bubble[0]);
    int *point_myarr = myarr_bubble;
    bubblesort(point_myarr, n );
    //Bubble sort
    cout<<"Bubble sort"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<myarr_bubble[i]<<" ";
    }
    

    int myarr_selection[7] = {3,0,4,7,1,2,78};
    int n2 = sizeof(myarr_selection)/sizeof(myarr_selection[0]);
    int *myarr_selection_point = myarr_selection;
    selectionSort(myarr_selection_point, n2);  
    cout<<endl<<"Selection sort"<<endl;
    // Selection sort
    for (int i = 0; i < n2; i++)
    {
        cout<<myarr_selection_point[i]<<" ";
    } 

    return 0;
}
