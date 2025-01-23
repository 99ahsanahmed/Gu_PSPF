 #include<iostream>
using namespace std;
int main()
{
    int arr1[6] = {1,2,3,4,5,6};
    for(int i=0; i<6; i++)
    {
        if(i%2==0)
        {
            cout<<*(arr1+i)<<" ";
        }
    }
    return 0;
}