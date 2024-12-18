#include<iostream>
using namespace std;
int main()
{

    int numbers[5];
    for(int i=0; i<5; i++){
        cout<<"enter value of numbers ["<<i+1<<" ]"<<endl;
        cin>>numbers[i];
    }
    for(int i=0; i<5; i++){
        cout<<numbers[i]<<endl;
    }
    return 0;
}
