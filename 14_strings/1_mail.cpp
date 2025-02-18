// MATH
// sqrt(x) Returns the square root of x. sqrt(25) = 5
// pow(x,y) Raises x to the power y. pow(2,3) = 8
// abs(x) Returns the absolute value. abs(-5) = 5
// ceil(x) Rounds up to the nearest integer. ceil(3.1) = 4
// floor(x) Rounds down to the nearest integer. floor(3.9) = 3


//STRING
// length() /
// size()
// Returns the number
// of characters in the
// string.

// string str ="Hello World!";
// cout << str.length();
// 12

// capacity() Returns the current
// allocated capacity of
// the string.

// string str = "Hello";
// cout << str.capacity();

// Varies based
// on
// implementation

// substr(pos,
// len)

// Extracts a substring
// starting at position
// pos with length len.

// string str ="Hello World!";
// cout << str.substr(6, 5);

// World

// at(index) Returns the character
// at the specified index
// (bounds checking).

// string str ="Hello";
// cout << str.at(1);

// e

// operator[] Access characters
// like an array (no
// bounds checking).

// string str = "Hello";
// cout << str[0];

// H

// append(str) Appends a string to
// the end of another.

// string str1 = "Hello";
// string str2 = " World!";
// cout << str1.append(str2);

// Hello
// World!

// operator+ Concatenates two

// strings.

// string str1 = "Hello";
// string str2 = " World!";
// cout << str1 + str2;

// Hello
// World!

// find(substri
// ng)

// Finds the first
// occurrence of a
// substring.

// string str = "Hello
// World!"; cout <<
// str.find("World");

// 6

// rfind(substr
// ing)

// Finds the last
// occurrence of a
// substring.

// string str = "Hello
// World!"; cout <<
// str.rfind("l");

// 9

// compare(str) Compares two strings
// lexicographically.

// string str1 = "apple";
// string str2 = "banana";
// cout << str1.compare(str2);
// -1

// replace(pos,
// len, str)

// Replaces part of the
// string with another
// string.

// string str = "Hello
// World!"; str.replace(6, 5,
// "Everyone"); cout << str;

// Hello
// Everyone!

// insert(pos,
// str)

// Inserts a string at the
// specified position.

// string str = "Hello!";
// str.insert(5, " World");
// cout << str;

// Hello
// World!

// erase(pos,
// len)

// Erases part of the
// string.

// string str = "Hello
// World!"; str.erase(6, 5);
// cout << str;

// Hello !

// clear() Clears the string
// content.

// string str = "Hello";
// str.clear(); cout <<
// str.empty();

// 1 (true)

// begin() Returns an iterator to
// the first character.

// string str = "Hello";
// for (auto it = str.begin();
// it != str.end(); ++it)
// { cout << *it << " "; }

// H e l l o

// end() Returns an iterator to
// the past-the-end
// element.

// string str = "Hello";
// for (auto it = str.begin();
// it != str.end(); ++it)
// { cout << *it << " "; }

// H e l l o

// rbegin() Reverse iterator to
// the last character.

// string str = "Hello";
// for (auto it =
// str.rbegin(); it !=
// str.rend(); ++it) {
// cout << *it << " "; }

// o l l e H

// rend() Reverse iterator to
// the before-the-first
// element.

// string str = "Hello";
// for (auto it =
// str.rbegin(); it !=
// str.rend(); ++it) {
// cout << *it << " "; }

// o l l e H

// to_string(va
// lue)

// Converts a numeric
// value to a string.

// int num = 42;
// string str=to_string(num);
// cout << str;

// 42

// stoi(str) Converts a string to
// an integer.

// string str = "123";
// int num = stoi(str);
// cout << num;

// 123

// swap(str1,
// str2)

// Swaps the contents of
// two strings.

// string str1 = "Hello";
// string str2 = "World";
// str1.swap(str2);
// cout << "str1: " << str1 <<
// ", str2: " << str2;

// str1:
// World,
// str2: Hello
#include<iostream>
using namespace std;
int main()
{
    string mail;
    cout<<"Enter email";
    cin>>mail;
    if (mail.find("@") < mail.find(".")){
        cout << "Valid";
    }
    else {
        cout << "Invalid";
    }
    
    return 0;
}