//	This program demostrates how to copy from one file to another file//

#include<iostream>
#include<fstream>
#include<string>
using namespace std;


int main(){
	fstream fin,fout;
	fin.open("file.txt");			//File 1
	fout.open("file1.txt");		//File 2
	
	char ch;
	while(!fin.eof()){
		fin.get(ch);
		fout<<ch;
		
	}
	
	cout<<"Cheating Successful"<<endl;
	
	fin.close();
	fout.close();
	
	
	return 0;
	
}
