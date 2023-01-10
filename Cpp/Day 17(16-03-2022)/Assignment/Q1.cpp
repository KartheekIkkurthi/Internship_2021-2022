//Count the number of time the word "the" is present in  the file

#include<iostream>
#include<fstream>
#include<cstring>

using namespace std;

int main(){
	fstream fin;
	fin.open("file.txt");	//Open the file named file.txt
	int count =0;
	char str1[30];
	char str2[4]="the";
	if(!fin)
		cout<<"File did not open"<<endl;
		
	else
		while(!fin.eof()){
		fin>>str1;
			if(strcmp(str1,str2)==0)	//Count the number of times 'the' has occured in the file
			{
			count++;
			}
		}
	
	cout<<"Total number of 'THE' are :"<<count<<endl;
	
	fin.close();
	
	return 0;
	
}//End of the program

