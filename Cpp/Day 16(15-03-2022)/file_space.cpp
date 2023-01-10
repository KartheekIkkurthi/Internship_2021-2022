//		This program demonstrates the counting of the white spaces

#include<iostream>
#include<fstream>
using namespace std;

int main(){
	fstream fin;
	fin.open("file.txt");
	int count =0;
	char str;
	if(!fin)
		cout<<"File did not open"<<endl;
		
	else
		while(!fin.eof()){
		fin.get(str);
			if(str == ' ')		//Count White-Spaces
			{
			count++;
			}
		}
	
	cout<<"Total White-Spaces are :"<<count<<endl;
	
	fin.close();
	
	return 0;
	
}
