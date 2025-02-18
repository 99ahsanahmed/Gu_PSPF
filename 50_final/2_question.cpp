#include<iostream>
using namespace std;

int main()
{
    int m,n;
    cout<<"Enter number of rows"<<endl;
    cin>>m;
    cout<<"Enter number of coloumns"<<endl;
    cin>>n;
    int** cinema = new int*[m];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cinema[i][j]=0;
        }
        cout<<endl;
    }
    while (true)
    {
        for (int k = 0; k < m; k++)
        {
            for (int l = 0; l < n; l++)
            {
                cout<<cinema[k][l]<<" ";
            }
            cout<<endl;
            
        }
        int a,b;
        cout<<"enter row number and coloumn number OR -1 -1 to exit"<<endl;
        cin>>a;
        cin>>b;
        if (a==-1 && b==-1)
        {
            cout<<"Exiting";
            break;
        }
        if (cinema[a][b]==1)
        {
            cout<<"Seat already booked!";
            break;
        }else{
            cinema[a][b]=1;
            cout<<"Seat booked"<<endl;
            for (int k = 0; k < m; k++)
            {
                for (int l = 0; l < n; l++)
                {
                    cout<<cinema[k][l]<<" ";
                }
                    cout<<endl;
            }
            break;
        }
    }
    return 0;
};