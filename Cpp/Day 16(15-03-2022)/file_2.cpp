//	This program demonstrates hoe to read one line at a time//
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
	ifstream input;string str;
	input.open("file.txt");
	if(!input){
		cout<<"File Cannot open"<<endl;
		}
	else{
		while(getline(input,str))			//getline helps to read one line at a time
		{
			cout<<str<<endl;
			}
			
		}
	return 0;
	
}

