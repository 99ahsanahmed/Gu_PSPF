// Scenario: You are analyzing a text. You need to count how many times a specific word
// appears in the sentence.
// ● Task: Write a program that counts the number of occurrences of the word "data" in a
// sentence provided by the user.#include<iostream>
#include<iostream>
using namespace std;
int main()
{
    string sentence = "It is very crucuial to safe data of the country data is data is data very important";
    int quantity=0;
    int n  = sentence.length();
    for (int i = 0; i < n; i++)
    {
        if(sentence[i]=='d' && sentence.substr(i,4) == "data"){
            quantity++;
        }
    }
    cout<<quantity;
    
    return 0;
}
