// 2_Create a dynamic 2D array and input/output its elements.
// Took help from AI and google, because of non familarity with pointers in 2darrays
#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter the number of rows and columns : ";
    cin>>m>>n;
    int **arr = new int*[m]; // Took help from AI and google, because of non familarity with pointers in 2darrays
    for(int i=0;i<m;i++)
    {
        arr[i] = new int[n];
        for(int j=0;j<n;j++)
        {
            cout<<"Enter element "<<i<<" "<<j<<" : ";
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}