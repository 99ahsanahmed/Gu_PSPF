#include<iostream>
using namespace std;
// CHATPT USED
int main()
{
    int rows = 2, cols = 3;
    
    
    int **arr = new int*[rows];  
    for(int i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];
    }

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            arr[i][j] = i + j;
        }
    }

    cout << "2D Array: " << endl;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    delete[] arr;  

    return 0;
}
