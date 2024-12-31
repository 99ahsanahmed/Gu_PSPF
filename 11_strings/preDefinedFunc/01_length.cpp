// 1. USER DEFINED FUNCTION TO FIND LENGTH OF CHAR ARRAY
#include<iostream>
// #include<cstring>
using namespace std;
int main()
{
    char str1[20] = "Hello World"; //With space
    int len=0;
    // cout<<strlen(str1); //11
    for (int i = 0; i < 20; i++)
    {
        if(str1[i]!='\0'){ // tried like this str1[i]!=' ' ,  but it wasnt working correctly, then saw this solution on chatgpt, learned about new thing named "null character" ; means end of string.
            len++;
        }
    }
    cout<<len;    
    return 0;
}