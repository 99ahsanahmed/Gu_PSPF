#include<iostream>
using namespace std;
int main()
{
    int g1=5,shelfp=5,sectionp=1;
    //! SHELVES
    for (int shl = 1; shl <=3; shl++){
    cout<<"Shelf "<<shl<<" (Shelf price $"<<shelfp<<"):\n";
    
        for (int sect = 1; sect <=3; sect++)
        {
            cout<<"Section "<<sect<<"(Section price=$"<<sectionp<<"): Gift 1 $"<<g1+shelfp+sectionp<<" Gift 2 $"<<g1+shelfp+sectionp<<"\n";
            sectionp = sectionp+1;
        }
        cout<<"\n";
        sectionp=1;
        shelfp = shelfp+3;
    
    }
    
    return 0;
}