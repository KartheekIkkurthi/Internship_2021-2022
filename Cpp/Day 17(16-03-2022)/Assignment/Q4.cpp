//Count the number of words that end with 's' ?

#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main(){
	int cnt=0;
	char str[40];
	fstream fio;
	fio.open("file.txt");
	
	if(!fio){
		cout<<"The file doesn't exist"<<endl;
		}
	
	else{
					
		while(!fio.eof()){
			fio >> str;
			int a=strlen(str);
				if(str[a-1]=='s'){
					cout << str << endl;
					cnt++;
					}
				
		}
		}	
			
		cout<<"The number of words with 's' :"<<cnt<<endl;
	return 0;
	
}
