#include<iostream>
using namespace std;
void normalFabo(){
    int t1=2,t2=3,next;
    for (int i = 0; i < 10; i++)
    {   
        if (i<1)
        {
            cout<<t1<<" "<<t2;
        }
        
        if (i>1)
        {
            next = t1+t2;
            t1=t2;
            t2=next;
            cout<<next<<" "; 
        }
    }
    return;
}

int recfabo(int n){
    if (n==0)return 2;
    if (n==1)return 3;
    return recfabo(n-1) + recfabo(n-2);
}

void printRecFabo(int n){
    for (int i = 0; i < n; i++)
    {
        cout<<recfabo(i)<<" ";
    } 
    return;
}

int recSum(int n){
    if (n<1)return 0; 
    return n + recSum(n-1);
}

int recEven(int n){
    if (n>10)return 10;
    if (n%2==0)
    {
        cout<<n<<" ";
    }
     
    return recEven(n+1);
}
int main()
{
    // normalFabo();

    int n=10;
    // printRecFabo(n);

    // recSum(n)
    
    // recEven(2);

    
    return 0;
}