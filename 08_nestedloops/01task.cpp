#include<iostream>
using namespace std;
int main()
{
    float avg_m,avg_s,avg_e;
    float t1,t2,t3,t4,t5,t6;
    for (int i = 1; i <= 4; i++)
    {
        switch (i)
        {
        case 1:
            cout<<"enter maths marks: \n";
            cout<<"enter 1st test marks\n";
            cin>>t1;
            if(t1<=0){
            cout<<"skipping..";
            t1=0; 
            } 
            cout<<"enter 2nd test marks\n";
            cin>>t2;
            if(t2<=0){
            cout<<"skipping.."; 
            t2=0;
            } 
            avg_m=(t1+t2)/2;
            break;
        case 2:
            cout<<"enter science marks: \n";
            cout<<"enter 1st test marks\n";
            cin>>t3;
            if(t3<=0){
            cout<<"skipping.."; 
            t3=0;;
            } 
            cout<<"enter 2nd test marks\n";
            cin>>t4;
            if(t4<=0){
            cout<<"skipping.."; 
            t4=0;;
            } 
            avg_s=(t3+t4)/2;
            break;
        case 3:
            cout<<"enter english marks: \n";
            cout<<"enter 1st test marks\n";
            cin>>t5;
            if(t5<=0){
            cout<<"skipping.."; 
            t5=0;;
            } 
            cout<<"enter 2nd test marks\n";
            cin>>t6;
            if(t6<=0){
            cout<<"skipping.."; 
            t6=0;;
            } 
            avg_e=(t5+t6)/2;
            break;
        case 4:
            cout<<"FINAL RESULTS: \n";
            cout<<"Maths: "<<avg_m<<"\n";        
            cout<<"Science: "<<avg_s<<"\n";        
            cout<<"English: "<<avg_e<<"\n";    
            break;
        default:
            break;
        } 
    
    }
    return 0;
}