#include <iostream>
using namespace std;
int main() {
    string name;
    for (int i = 1; i <=5; i++)
    {
        cout<<"enter name"<<endl;
        cin>>name;
        cout<<i<<"_"<<name<<endl;
        cout<<"spots remaining "<<5-i<<endl;
    }
    
    return 0;
}
