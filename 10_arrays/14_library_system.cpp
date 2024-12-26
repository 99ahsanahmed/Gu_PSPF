#include<iostream>
using namespace std;
int main()
{
    int book=2,book_details=3;
    string books[book][book_details];
    for (int i = 0; i < book; i++)
    {
        cout<<"enter book details for book "<<i+1<<endl;
        for (int j = 0; j < book_details; j++)
        {
            cin>>books[i][j];
        }
    }

    for (int i = 0; i < book; i++)
    {
        cout<<"book "<<i+1<<" details"<<endl;
        for (int j = 0; j < book_details; j++)
        {
            cout<<books[i][j]<<",";
        }
        cout<<endl;

    }

    
    return 0;
}