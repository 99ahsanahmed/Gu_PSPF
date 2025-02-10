#include<iostream>
using namespace std;
int main()
{
    string sentence = "the quick brown fox jumps over a lazy dog";
    int count=0;
    for (int i = 0; i < sentence.length(); i++)
    {
        if (sentence[i] == ' ' )
        {
            count++;
        }
    }
    cout<<"Words :" <<count+1;
    return 0;
}