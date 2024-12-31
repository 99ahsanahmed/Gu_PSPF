// Hands on exercise - 4
//Take a sentence as input and print each word on a new line.
#include<iostream>
using namespace std;
int main()
{
    string sentence;
    cout<<"Enter a sentence: ";
    getline(cin,sentence);
    for(int i=0;i<sentence.length();i++)
    {
        if(sentence[i]==' ')
        {
            cout<<endl;
        }
        else
        {
            cout<<sentence[i];
        }
    }
    return 0;
}