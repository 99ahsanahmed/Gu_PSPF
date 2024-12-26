#include<iostream>
using namespace std;
int main()
{
     int array1[5][3]={
        {1,2,3},
        {1,2,3},
        {1,2,3},
        {1,2,3},
        {1,2,3},
    };
    int array2[3][4]={
        {1,2,3,4},
        {1,2,3,4},
        {1,2,3,4},
    };
    int array3[5][4];
    for (int i=0; i<=4; i++)
    {
        for (int j = 0; j <= 3; j++)
        {
            array3[i][j]=array1[i][j] * array2[i][j];
        }
    }
    for (int l = 0; l <=5; l++)
    {
        for (int m = 0; m <=4; m++)
        {
            cout<<array3[l][m];
        }   
        cout<<endl;
    }
    return 0;
}