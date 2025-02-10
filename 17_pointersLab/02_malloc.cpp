#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    float n;
    cout<<"Enter number of days : ";
    cin>>n;
    float *ptr = (float*) malloc(sizeof(float)*n);
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter day "<<i+1<<" temperature";
        cin>>*(ptr + i) ;//This "ptr" is address and ptr + i makes sure that pointer jumps to next location of malloc; ptr+i address par jo value hai osko access karne ke liye braces ke bahar * lagaya hai
    }

    for (int j = 0; j < n; j++)
    {
        cout<<"day "<<j+1<<"temp : "; 
        cout<<*(ptr + j)<<" degree"<<endl; 
    }
    free(ptr);
    return 0;
}