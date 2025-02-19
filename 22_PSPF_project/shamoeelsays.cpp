#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

// """"AHSAN-generateSequence"""""
void generateSequence(int sequence[] , int level){
    for (int i = 0; i < level; i++)
    {
        sequence[i] = rand() % 9;
    }
}

// Displays the sequence and waits for a time based on the level (difficulty)
// """"MUDASSIR-DISPLAY SEQUENCE AND DIFFICULTY feature""""
void displaySequence(int sequence[], int level, int lives) {
    cout<<"lives : "<<lives<<endl;
    cout << "Shamoeel Says: ";
    for (int i = 0; i < level; i++) {
        cout << sequence[i] << " ";
    }
    cout << endl;
    
    // Set wait time based on level
    int waitTime;
    if (level <= 5) {
        waitTime = 3;
    } else if (level <= 8) {
        waitTime = 2;
    } else {
        waitTime = 2;
    }
    
    cout << "Memorize the sequence for " << waitTime << " seconds..." << endl;
    
    // Wait for the appropriate time (Linux/Mac: sleep, Windows: timeout)
    string sleepCommand = "sleep " + to_string(waitTime);
    system(sleepCommand.c_str());
    
    // Clear the screen (Linux/Mac: clear, Windows: cls)
    system("clear");
}

// """"AHSAN-getUserInput"""
bool getUserInput(int sequence[], int length) {
    cout<<"Enter the sequence :";
    int input[length];
    for (int i = 0; i < length; i++)
    {
        cin>>input[i];
        if (input[i] != sequence[i])
        {
            return false;
        }
    }
    return true;
}

// """""AHSAN-MAIN"""""
int main() {
    srand(time(0));
    int sequence[100];
    int level=1;
    int lives=3;//""""Ahsan"""""

    cout<<"Shamoeel Says:"<<endl;
    while(level<100){
        generateSequence(sequence, level);
        displaySequence(sequence,level,lives);//MUDASSIR
        if (!getUserInput(sequence,level))
        {
            lives--;
            cout<<"koi naa abhi "<<lives<<" lives hain"<<endl;
            if (lives==0)
            {
                cout<<"Hahah bhool gai";
                break;
            }
            
        }
        cout<<"Big brain"<<endl;
        level++;
    }



    return 0;
}
