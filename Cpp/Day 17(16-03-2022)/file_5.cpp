
#include<iostream>
#include<fstream>
using namespace std;


int main(){
	ofstream outfile;
	outfile.open("file.txt");
	outfile<<"This is This";
	long pos=outfile.tellp();
	outfile.seekp(pos+7);
	outfile<<"Again This is This";
	outfile.close();
	cout<<"Done!!";
	
return 0;

}
