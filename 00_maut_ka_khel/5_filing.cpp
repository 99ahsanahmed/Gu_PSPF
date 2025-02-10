#include<iostream>
#include<fstream>
using namespace std;
void createFile(){
    ofstream outFile("ahsan.txt");

    if (outFile.is_open())
    {
        outFile<<"likhdo file main";
        outFile<<"wow";
        for (int i = 0; i < 6; i++)
        {
            outFile<<i<<" ";
        }
        outFile.close();
        cout<<"game over for file";
    }
    else{
        cout<<"nahi khul pai";
    }
}

void readFile(){
    ifstream fileMainlo("ahsan.txt");
    string line;
    if (fileMainlo.is_open())
    {
        while(getline(fileMainlo,line)){
            cout<<line<<endl;
        }
        fileMainlo.close();
    }else{
        cout<<"nahi parh paya bhai";
    }
}
void appendFile(){
    fstream likhFile("ahsan.txt" , ios::app);
    if (likhFile.is_open())
    {
        likhFile<<"\n chalo chalooo!";
        likhFile.close();
    }else{
        cout<<"off scene hai bro";  
    }
}
int main()
{
    createFile();

    cout<<"\nparh raha hoon";
    readFile();


    cout<<"\n append karlia";
    appendFile();
    return 0;
}