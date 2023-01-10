//	THIS PROGRAM ILLUSTRATES THE OPENING OF A FILE AND WRITING IN IT.

#include<iostream>
#include<fstream>
using namespace std;


int main(){
	ofstream ofile;
	ofile.open("File.txt");
	ofile<<"Line of Document"<<endl;
	ofile<<"Another line"<<endl;
	
	
	cout<<"To the terminal"<<endl;
	ofile.close();
	
	
return 0;

}
