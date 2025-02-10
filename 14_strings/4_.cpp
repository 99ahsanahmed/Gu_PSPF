// Scenario: You need to determine how many times each character appears in a
// sentence.
// ● Task: Write a program that takes a sentence and counts how many times each
// character appears using a loop.
#include<iostream>
using namespace std;
int main()
{
    string sentence = "the quick brown fox jumps over a lazy dog",letters = "abcdefghijklmnopqrstuvwxyz";
    int count=0;
    for (char i = 0; i <= letters.length() ; i++)//26
    {
        for (int j = 0; j < sentence.length(); j++)//20
        {
            if ( letters[i] == sentence[j] )//i=0=a //
            {
                count++;
            }
        }
        if (count>0)
        {
        cout<<letters[i]<<" is"<<count<< " times"<<endl;
        }
        count = 0;
    }
    
    
    return 0;
}