//		THIS PROGRAM IS AN EXAMPLE OF READ AND WRITE FUNCTION.
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main(){
	fstream fp;
	char buf[100];
	int pos;
	fp.open("file.txt",ios::out|ios::ate);
	cout<<"Writing to the file"<<endl;
	fp<<"Line Ekka"<<endl;
	fp<<"Line Dukka"<<endl;
	pos=fp.tellp();
	cout<<"Current location:"<<pos<<endl;
	fp.seekp(-2,ios::cur);
	fp<<endl<<"Random Data";
	fp.seekp(8,ios::beg);
	fp<<"Hell-Fire";
	fp.close();
	cout<<"Done writing"<<endl;
	fp.open("file.txt");
	cout<<"Scanning the file"<<endl;
	fp.seekg(0);
	while(fp.getline(buf,100)){
		cout<<buf<<endl;
		}
	pos=fp.tellg();
	
	cout<<"POS pointer is at"<<pos<<endl;
return 0;

}
