#include<iostream>
using namespace std;
int main()
{
    int arr[5],sum=0,avg=0;
    cout<<"Enter grades of 5 students: ";
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    avg=sum/5;
    for(int i=0;i<5;i++)
    {
        if(arr[i]>=90 && arr[i]<=100)
        {
            cout<<"person"<<i+1<<"has secured A grade"<<endl;
        }
        else if(arr[i]>=80 && arr[i]<=89)
        {
            cout<<"person"<<i+1<<"has secured B grade" <<endl;
        }
        else if(arr[i]>=70 && arr[i]<=79)
        {
            cout<<"person"<<i+1<<"has secured C grade"<<endl;
        }
        else if(arr[i]>=60 && arr[i]<=69)
        {
            cout<<"person"<<i+1<<"has secured D grade"<<endl;
        }
        else
        {
            cout<<"person"<<i+1<<"has secured F grade"<<endl;
        }
    }
        cout<<"average "<<avg;
    return 0;
}