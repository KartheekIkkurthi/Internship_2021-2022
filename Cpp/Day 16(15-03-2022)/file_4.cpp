//		This program demonstrates the word count of the words present in the mentioned file//

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
	fstream fin;
	fin.open("file.txt");
	int count =0;
	char str[30];
	if(!fin)
		cout<<"File did not open"<<endl;
		
	else
		while(!fin.eof()){
			fin>>str;
			//fin>>word;
			count++;
			cout << count;
		}
	cout<<"The Words are: "<<str<<endl;
	cout<<"Total Words :"<<count<<endl;
	
	fin.close();
	
	return 0;
	
}
