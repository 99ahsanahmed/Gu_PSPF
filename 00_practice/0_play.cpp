#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    cout<<"n : ";
    int n;
    cin>>n;
    vector<int> arr(n);
    vector<int> arrcpy(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        arrcpy[i]=arr[i];
    }
    int rev=n-1;
    for (int j = 0; j < n; j++)
    {
        arr[j]=arrcpy[rev];
        rev--;
        cout<<arr[j]<<" ";
    }
    
    
    return 0;
}
