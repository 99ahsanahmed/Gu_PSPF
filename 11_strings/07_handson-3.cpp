// Hands on exercise - 3
//  Write a program to check if a given string is a palindrome.
//  Hint: A palindrome reads the same backward as forward.
#include<iostream>
using namespace std;
string palindrome(string str){
    string rev= "";      
    for (int i = str.length()-1; i >=0 ; i--)
    {
        rev+=str[i];
    }
    if (rev == str)
    {
        return " palindrome";
    }
    else return " not palindrome";
}
int main()
{
    string str1 = "dad",str2 = "irfan khan",str3 = "Maham";      
    cout<<"string 1 is "<<palindrome(str1)<<endl;// palindrome
    cout<<"string 2 is "<<palindrome(str2)<<endl;// not palindrome
    cout<<"string 3 is "<<palindrome(str3);// palindrome but first letter is capital 
    //STRING 3 PROBLEM CAN BE RESOLVED THROUGH "TOLOWER()" PREDEFINED FUNCTION, but not taught yet.
    return 0;
}