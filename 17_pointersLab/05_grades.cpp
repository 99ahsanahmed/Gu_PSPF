#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int num_std;
    cout<<"Number of students : "; 
    cin>>num_std;
    float *grades =(float*) calloc(num_std, sizeof(float));
    string names[num_std];
    for (int i = 0; i < num_std; i++)
    {
        cout<<"Enter student name: ";
        cin>>names[i];
        cout<<"Enter "<<names[i]<<" marks: ";
        cin>>*(grades+i);
    }
    for (int j = 0; j < num_std; j++)
    {
        cout<<names[j]<<" : "<<*(grades+j)<<endl;
    }
    return 0;
}