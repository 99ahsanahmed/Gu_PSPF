// Concatenation: str1 + str2 // strcat()
// Length: str.length() // strlen()
// Accessing Characters: str[i]
// Substring: str.substr(start, length)
// Find: str.find("word")
// Comparison: str1 == str2   // strcmp()

// length()✅
// substr() ✅
// find() ✅
// append()
// erase() ✅
// replace() ✅


#include<iostream>
using namespace std;
int main()
{
    string sentence = "ahsan is a good boy";
    string sentence2;
    string sentence3;
    cout<<"enter a sentence2";
    getline(cin,sentence2);
    // cin>>sentence2;

    cout<<"enter a sentence3";
    getline(cin,sentence3);
    cin>>sentence3;
    
    cout<<sentence2<<"\n";
    cout<<sentence3<<"\n";
    // sentence3 = sentence + " " + sentence2; // CONCATENATE
    // cout<<"concatenate sentence3: \n"<<sentence3;

    // cout<<"\nLength of sentence1\n"<<sentence.length(); //length  

    // cout<<"\nfinding kuch in sentence3 : \n"<<sentence3.find("kuch"); //FIND => returns first letter index
    // // cout<<"\nfinding ahsan in sentence : \n"<<sentence.find(" "); //FIND

    // cout<<"\nsub string from sentence 0-5\n"<<sentence.substr(0,5); //substr => returns subtring
    
    // cout<<"\nreplace 0-5 from ahsan with king babar\n"<<sentence.replace(0,5,"king babar"); //replace()=> it will return the whole sentence

    // cout<<"\nerasing 0-10 from sentence\n"<<sentence.erase(2,11);//erase()=> it will return the whole sentence after erasing
    
    // cout<<"\nappending mic test 1 2 3 in sentence 3\n"<<sentence3.append("mic test 1 2 3");//append()=> it will add extra thing in the end

    return 0;
}