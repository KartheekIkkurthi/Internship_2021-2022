//	THIS PROGRAM DEMONSTRATES THE READ() FUNCTION FROM A FILE.

#include<iostream>
#include<fstream>
#include<string>
using namespace std;



class student{
	public:
	int roll;
	char name[25];
	float marks;
	void display(){
		fstream f;
		student s;
		f.open("Student.dat",ios::in |ios::binary);
		f.read((char*) &s,sizeof(s));
		cout<<"Roll:-"<<s.roll<<"\nName:-"<<s.name<<"\nMark:-"<<s.marks<<endl;
		
		f.close();
		}
};
	
int main(){
	student s;
	//s.display();
	char ch='n';
	char d;
	
	do{
		s.display();
		cout<<"Do you want to continue reading the database : [Y/N]"<<endl;
		cin>>d;
		if(d=='Y'||d=='y'){
		cout<<"You are going to read the database Again"<<endl;
		s.display();
		}
	}
	while(ch!='n');
	return 0;

}
		
