#include<iostream>
#include<fstream>
#include<vector>
#include<string>
using namespace std;

void displayFileContent(const string & filename){
    ifstream file(filename); 
    if(!file.is_open()){
        cout << "Failed to open file: " << filename << endl;
        return;
    }
    cout << "\nFile Content:" << endl;
    string line;
    while(getline(file, line)){
        cout << line << endl;
    }
    file.close();
}

int main(){
    vector<string> inputFiles = {
        "C:/Users/ahmed/OneDrive/Desktop/C++ VS-Code/PF-CLASS/test1.txt",
        "C:/Users/ahmed/OneDrive/Desktop/C++ VS-Code/PF-CLASS/test2.txt",
        "C:/Users/ahmed/OneDrive/Desktop/C++ VS-Code/PF-CLASS/test3.txt",
        "C:/Users/ahmed/OneDrive/Desktop/C++ VS-Code/PF-CLASS/test4.txt"
    };

    cout << "Content of test1.txt, test2.txt, test3.txt, test4.txt:" << endl;
    for(const auto & inputFile : inputFiles){
        displayFileContent(inputFile);
    }

    string outputFile = "merged_file.txt";
    ofstream mergedFile(outputFile); 
    if(!mergedFile.is_open()){
        cout << "Failed to open the output file: " << outputFile << endl;
        return 0;
    }

    for(const auto & inputFile : inputFiles){
        ifstream inputFileStream(inputFile); 
        if(!inputFileStream.is_open()){
            cout << "Failed to open input file: " << inputFile << endl;
            continue;
        }
        string line;
        while(getline(inputFileStream, line)){
            mergedFile << line << "\n"; 
        }
        inputFileStream.close();
    }
    mergedFile.close(); 
    cout << "\nFiles merged successfully" << endl;

    cout << "\nContent of the merged file:" << endl;
    displayFileContent(outputFile); 
	return 0;
}
