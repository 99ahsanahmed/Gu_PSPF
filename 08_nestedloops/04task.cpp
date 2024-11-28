#include<iostream>
using namespace std;
int main()
{
    int order,total=0,cupCake,cancel=0,val=0;
    char status;
    cout<<"WELCOME TO THE BAKERY!\n";
    cout<<"price of a cupcake is 3$\n";
    //! Number of Orders
    cout<<"How many orders?: \n";
    cin>>order;
    //! Loop for number of orders
    for (int i = 1; i <=order; i++)
    {
        //! Cannot be more than 5 orders
        if (i<=5)
        {
        //* Order number
        cout<<"Order #"<<i<<"\n";
        //* Kitnay cupcakes they?
        cout<<"number of cupcakes: ";
        cin>>cupCake;
        //! Validation step
        cout<<"order status: V-valid/C-cancel: ";
        cin>>status;
        if (status == 'V' || status == 'v' ){
            total=total + (3*cupCake);
            cout<<"order total: $"<<3*cupCake<<"\n";
            val++;
        }
        else if (status == 'C' || status == 'c' ){
            cout<<"skipping.."<<"\n";
            cancel++;
            continue;
        }
        cupCake=0;
        }
    }
    //! Cancelled orders being get minus from total orders
    cout<<"SALES SUMMARY:\n";
    cout<<"Total orders processed: "<<order<<"\n";
    cout<<"Valid orders: "<<val<<"\n";
    cout<<"cancelled orders: "<<cancel<<"\n";
    cout<<"Total sales: $"<<total<<"\n";
    return 0;
}