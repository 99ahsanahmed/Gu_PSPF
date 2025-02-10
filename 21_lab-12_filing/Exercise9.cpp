#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;

void displayFileContent(const string & filename){
	std:: ifstream file(filename);
	std::string line;
	if(file.is_open()){
		std::cout<<"File content:"<<std::endl;
		while(std::getline(file,line)){
			std::cout<<line<<std::endl;
		}
		file.close();
	}else{
		cout<<"Failed to open file."<<std::endl;
	}
}

int main(){
	std::ofstream createFile("test1.txt");
	if(createFile.is_open()){
		createFile<<"hello gutech and this is huzaifa"<<endl;
		createFile.close();
	}
	
	std::ifstream inputFile("test1.txt");
	std::ofstream outputFile("sorted_test1.txt");
	
	if(inputFile.is_open() && outputFile.is_open()){
		std::vector<std::string>lines;
		std::string line;
		
		while(getline(inputFile,line)){
			lines.push_back(line);
		}
		std::sort(lines.begin(),lines.end());
		std::copy(lines.begin(),lines.end(), std::ostream_iterator<std::string>(outputFile,"\n"));
		inputFile.close();
		outputFile.close();
		std::cout<<"Lines Sorted Successfully!"<<std::endl;
		displayFileContent("sorted_test1.txt");
	}else{
		std::cout<<"Failed to open file"<<std::endl;
	}
	return 0;
}