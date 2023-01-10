//			This program demonstrates the printing the char of the file individual till EOF//

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
		while(!input.eof())		//eof() helps to reach end of the file single character by character
		{
			input>>str;
			cout<<str<<endl;
			}
			
		}
	return 0;
	
}
	
