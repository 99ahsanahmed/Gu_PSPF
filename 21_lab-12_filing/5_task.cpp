#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
	string line;
	int lineNo=1;
	string part1, part2;
	
	ifstream inFile("main.txt");
	if (inFile.is_open()){
		while (getline(inFile, line)){
			if (lineNo<=100){
				lineNo++;
			    part1 += line + "\n";
			} else if (lineNo>100 && lineNo<=200) {
			    lineNo++;
			    part2 += line + "\n";
		    }
		} 
		inFile.close();	
	} else {
		cout<<"Error!";
	} 
	

	ofstream outFile("part1.txt");
	if (outFile.is_open()){
		outFile<<part1;
		outFile.close();
	} else {
		cout<<"Error!";
	}
	
	
	ofstream outfile("part2.txt");
	if (outfile.is_open()){
		outfile<<part2;
		outfile.close();
	} else {
		cout<<"Error!";
	}
	
	cout<<"Text splitted into two small files";
	return 0;
}
