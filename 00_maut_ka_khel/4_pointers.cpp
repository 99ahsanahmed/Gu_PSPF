#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int* ptra = &a;
    (*ptra)++;
    cout<<*ptra;


    cout<<"\naccessing array using pointer \n";
    int arr[3]={1,2,3};
    cout<<*(arr)+2;
    return 0;
}