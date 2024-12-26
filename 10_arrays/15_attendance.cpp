#include<iostream>
using namespace std;
int main()
{
    int students=5,days=5;
    float attendance[students][days];
    float percentage=0,total=0,max=0;

    cout<<"Enter attendance for 5 days of 5 students (1=P , 0=A)"<<endl;
    // INPUT ATTENDANCE
    for (int i = 0; i < students; i++)
    {
        cout<<"Student "<<i+1<<":";
        for (int j = 0; j < days; j++)
        {
            cin>>attendance[i][j];
        }
        cout<<endl;
    }

    // PRINT PERCENTAGE
    for (int i = 0; i < students; i++)
    {
        for (int j = 0; j < days; j++)
        {
            if(attendance[i][j]==1){
            total++;
            }
        }
        percentage=(total/days)*100;
        if (percentage<75)
         {
           cout<<"student "<<i+1<<" percentage is below 75%, percentage: "<<percentage<<"%"<<endl;        
         } 
        percentage=0;
        total=0;
    }

    //MAX_DAYS
    for (int i = 0; i < students; i++)
    {
        for (int j = 0; j < days; j++)
        {
            if (attendance[j][i]==1)
            {
                max++;
            }
        }
        if (max==5)
        {
         cout<<"day "<<i+1<<" has maximum attendance"<<endl;  
        }
        max=0;
    }

    return 0;
}