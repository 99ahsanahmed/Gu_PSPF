#include<iostream>
using namespace std;
int main()
{
    int prog=0,rem,daily_prog;
    cout<<"SAVINGS TARGET:100$ \n";
    for (int i = 1; prog <= 100 ; i++)
    {
        cout<<"Enter day "<<i<<" savings: \n";
        cin>>daily_prog;
        prog=prog+daily_prog;
        if(prog>100){
            cout<<"total days taken: "<<i<<" days \n";
            cout<<"total savings: "<<prog<<"$ \n";
            int extra = prog-100;
            cout<<"Extras: "<<extra<<"$ \n";
        }
        else{
        cout<<"\nprogress: "<<daily_prog<<"$ \n";
        rem=100-prog;
        daily_prog=0;
        cout<<"Remaining: "<<rem<<"$ \n";
        }
    }
    
    return 0;
}