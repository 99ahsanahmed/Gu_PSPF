// 2. USER DEFINED FUNCTION ; MANUALLY CONCATENATE STRINGS
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s1[10] = "Hello" ,s2[10] = "world",s3[19];
    int s3index=0;
    for (int i = 0; i < 2; i++)
    {
        if (i == 0)
        {
            for (int j = 0; j < strlen(s1); j++)
            {
                s3[s3index] = s1[j];
                s3index++;
            }
            cout<<" ";
        }
        else if( i == 1 )
        {
            for (int k = 0; k < strlen(s2); k++)
            {
                s3[s3index] = s2[k];
                s3index++;
            }
        }
    }
    cout<<"Concatenated character array is : "<<s3<<endl;
    return 0;
}