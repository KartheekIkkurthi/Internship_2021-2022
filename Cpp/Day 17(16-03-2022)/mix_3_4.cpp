		//THIS PROGRAM ILLUSTRATES THE IMAGINATION OF THE AUTHOR FOR CREATION OF A MENU FOR DATA INSERTION AS WELL AS READING.


#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class student{
	public:
	int roll;
	char name[25];
	float marks;
	void getdata(){	
		cout<<"Enter the roll no and Name"<<endl;
		cin>>roll>>name;
		cout<<"marks"<<endl;
		cin>>marks;
		}
	void Addrecord(){
		fstream f;
		student stu;
		f.open("Student.dat",ios::app/*|ios::binary*/);
		stu.getdata();
		f.write((char*)&stu,sizeof(stu));
		
		f.close();
		}
};	//End of Class

class Readstudent:public student{
	public:
	void display(){
		fstream f;
		student s;
		f.open("Student.dat",ios::in |ios::binary);
		f.read((char*) &s,sizeof(s));
		cout<<"Roll:-"<<s.roll<<"\nName:-"<<s.name<<"\nMark:-"<<s.marks<<endl;
		
		f.close();
		}
int main(){
	char ch1='n';
	char ch2='0';
	char ch;
	student s1;
	Readstudent r1;
	cout<<"Welcome to the Data Enter Mode"<<endl;
	
	do{
		s1.Addrecord();
		cout<<"Do you want to enter the data [Y/N] || Do you want to read the Data[0/1]"<<endl;
		cin>>ch;
		if(ch == 'Y' || ch =='y'){
			s1.Addrecord();
			}
		else if(ch =='1'){
			r1.display();
			}
		}
	while(ch1 !='n' || ch2 !='0');
	
	return 0;
	
}
			
	
