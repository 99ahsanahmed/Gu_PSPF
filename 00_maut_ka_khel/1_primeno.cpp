#include<iostream>
using namespace std;

bool primeCheck(int *numPtr ){
    bool isPrime=true;
    if (*numPtr==2 || *numPtr==3)
    {
        return isPrime;
    }
    
    for (int i = 1; i < *numPtr/2; i++)
    {
        if (*numPtr%i==0)
        {
            isPrime = false;
        }        
    }
    return isPrime;
}

int wordCount(){
    // string sentence = "I am ahsan, mera kaam hai sh8/ parhai ke 76il/ ilawa sab karna" ;
    // int words=0;
    // for (int i = 0; i <= sentence.length(); i++)
    // {
    // bool isWord=false;

    //     if(sentence[i] == ' '){
          
    //       for (int j = 0; j < i; j++)
    //       {
    //         if ( !(isalpha(sentence[j])) )
    //         {
    //             isWord=false;
    //         }else{
    //             isWord=true;
    //         }
            
    //       }
            
    //     }
    //     if (isWord)words++;
        
    // }

    
    return ;
}
int main()
{
    // int prime=10;
    // int *primePtr = &prime;
    // primeCheck(primePtr);
    
    // cout<<wordCount();



    
    return 0;
}