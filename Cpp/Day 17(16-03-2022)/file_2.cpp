//		THIS PROGRAM DEMONSTRATES THE OPEN FILE AND APPEND THE DATA.

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
	char line[100];
	fstream file;
	file.open("File.txt",ios::out|ios::app);
	
	if(file.fail()){
		cout<<"File did not open"<<endl;
		
	}
	else{
		cout<<"Name"<<endl;
		cin.getline(line,100);
		file<<line<<endl;		//Append
		cout<<"Age"<<endl;
		cin.getline(line,100);
		file<<line<<endl;
		cout<<"File Updated"<<endl;
		
		}
	return 0;
	
}
