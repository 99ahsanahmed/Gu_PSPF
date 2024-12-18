#include<iostream>
using namespace std;
void productToCart(string prname,int quant,double price_per_u){
    cout<<prname<<" has been added to cart, quantity: "<<quant<<" price per unit is "<<price_per_u;
}
double calCartTotal(int quant,double price_per_u){
    cout<<endl;
    double total = quant * price_per_u;
    return total;
}
double applyDiscount(double totalAmount,double discountRate){
    double discount = totalAmount * discountRate;
    return totalAmount - discount; 
}
void checkout(double total_amount,double total_discount){
    cout<<"Total amount before discount: "<<total_amount<<endl;
    cout<<"Total amount after discount: "<<total_discount;
}
int main()
{
    string product_name;int quantity,products;double pricePerUnit; double discount_Rate;
    cout<<"Number of Products?: ";
    cin>>products;
    for (int i = 1; i <=products; i++)
    {
    cout<<"product"<<i<<endl;
    cout<<"Product name: ";
    cin>>product_name;
    cout<<"quantity: ";
    cin>>quantity;
    cout<<"price Per Unit: ";
    cin>>pricePerUnit;
    cout<<"Discount rate: ";
    cin>>discount_Rate;
    // DETAILS
    productToCart(product_name,quantity,pricePerUnit);
    // TOTAL PRICE
    double total_amount = calCartTotal(quantity,pricePerUnit);
    //AFTER DISCOUNT
    double discounted_price = applyDiscount(total_amount,discount_Rate);
    checkout(total_amount,discounted_price);
    cout<<endl;
    }
    return 0;
}