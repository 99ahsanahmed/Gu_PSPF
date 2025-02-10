#include<iostream>
using namespace std;
void printDarray(int ptrarr[],int n){
    for (int i = 0; i < 10; i++)
    {
        ptrarr[i] = i+2;
        cout<<ptrarr[i]<<" ";
    }
    return;
}

void ddmemory(){
    int rows = 3,cols=4;
    int** ptr2darr = new int*[rows];
    //COLOUMNS
    for (int i = 0; i < rows; i++)
    {
        ptr2darr[i] = new int[cols]; 
    }
    
    for (int j = 0; j < rows; j++)
    {
        for (int k = 0; k < cols; k++)
        {
            // cout<<"row "<<j+1<<"coloum "<<k+1;
            ptr2darr[j][k] =  k;
        }
    }
    
    for (int s = 0; s < rows; s++)
    {
        for (int i = 0; i < cols; i++)
        {
            cout<<ptr2darr[s][i]<<" ";
        }
        cout<<"\n";
    }
    
    return ;
}
int main()
{
    int* ptrarr = new int[10];
    printDarray(ptrarr,10);
    cout<<"\n2d array memory allocation\n";
    ddmemory();
    delete ptrarr;
    return 0;
}