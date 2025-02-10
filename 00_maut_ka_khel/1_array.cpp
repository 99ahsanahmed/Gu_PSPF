#include<iostream>
using namespace std;
#include <vector>
void minMax(vector<int> arr){
    int max=0,min=1000;
    for (int i = 0; i < arr.size(); i++)
    {
        if (max<arr[i])
        {
            max=arr[i];
        }
        if (min>arr[i])
        {
            min=arr[i];
        }
    }
    cout<<"max no: "<<max;
    cout<<"min no: "<<min;
    return;
}

void passby(int passbyVal[],int size ){
    for (int i = 0; i < size; i++)
    {
        passbyVal[i] =i+2 ;
    }
    return;
}

void dArrMultiply(){
    int array1[5][3]={
        {1,2,3},
        {2,2,3},
        {1,2,3},
        {1,2,3},
        {1,2,3},
    };
    int array2[3][4]={
        {1,2,3,4},
        {1,2,3,4},
        {1,2,3,4}
    };
    int array3[5][4]={0};

    for (int i=0; i<5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            for (int k = 0; k < 3; k++)
            {
              array3[i][j]+=array1[i][k] * array2[k][j];
            }
            
        }
    }
    for (int l = 0; l <5; l++)
    {
        for (int m = 0; m <4; m++)
        {
            cout<<array3[l][m]<<"  ";
        }   
        cout<<endl;
    }
    return;
}
int main()
{
    vector <int> arr = {1,2,9,10,5,0};
    cout<<"Max min array element function: \n";
    minMax(arr);
    cout<<"\n";


    cout<<"Pass array to function function: \n";
    int passArr[3] ={1,2,3},n =sizeof(passArr)/sizeof(int); 
    passby(passArr,n);
    for (int i = 0; i <n; i++)
    {
        cout<<passArr[i]<<" "; 
    }
    


    cout<<"2D arrays multiplication \n";
    dArrMultiply();
    return 0;
}