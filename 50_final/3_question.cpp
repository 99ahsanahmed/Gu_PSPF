#include<iostream>
using namespace std;
int main()
{
    
    int totalElement;
    cout<<"Enter the total number of elements"<<endl;
    cin >> totalElement;
    int total = (totalElement * (totalElement + 1)) / 2;
    int sum = 0;
    int forSum;
    int sequence = totalElement-1 ;
    for (int i = 0; i < sequence; i++)
    {
        cout<<"Enter the sequence"<<endl;
        cin >> forSum;
        sum+=forSum;
    }
    
    cout << "The missing number is" <<total - sum << endl;

    return 0;
}