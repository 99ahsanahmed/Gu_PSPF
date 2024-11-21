#include <iostream>
using namespace std;
int main() {
    float pin_api=00000;
    float balance=760;
    float epin;
    for (int i = 0; i < 3; i++)
    {
        float w_amount;
        cout<<"enter 5 digits pin: "<<endl;
        cin>>epin;
        if (epin == pin_api)
        {
            cout<<"welcome back!";
            cout<<"enter withdrawal amount: ";
            cin>>w_amount;
            if (w_amount < balance)
            {
                cout<<w_amount<<" withdrawed!";
                epin=00000;
                break;
            }
        }        
    }
        if (epin != pin_api)
        {
            cout<<"card blocked!";
        }    return 0;
}