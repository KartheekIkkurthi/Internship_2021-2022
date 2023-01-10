//		This program demonstrates the printing the single character//

#include<iostream>
#include<fstream>
using namespace std;

int main(){
	fstream input;string str,str2;
	
	input.open("file1.txt");
	if(!input){
		cout<<"File Cannot open"<<endl;
		}
	else{
		while(!input.eof())		//eof() helps to reach end of the file single character by character
		{
			input>>str>>str2;
			cout<<str<<'\t'<<str2<<endl;
			}
			
		}
		
	input.close();
	
	return 0;
	
}
