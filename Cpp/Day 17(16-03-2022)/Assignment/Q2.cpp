//Count the number of words that has 'a' in them//

#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main(){
	fstream ofile;
	ofile.open("file.txt");
	int cnt=0;
	char str[40];
	
	if(!ofile){
		cout<<"The file does not exist pls check"<<endl;
		}
	else{
					
		while(!ofile.eof()){
			ofile >> str;
			int leng = strlen(str);
				for(int i=0;i<leng;i++){
				if(str[i]=='a'){
					cnt++;
					}
				
		}
		}	
		}	
		cout<<"The Number of words which contain 'a' are:"<<cnt<<endl;
	return 0;
	
}
