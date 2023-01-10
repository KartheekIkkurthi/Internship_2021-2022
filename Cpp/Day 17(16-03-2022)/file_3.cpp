//		THIS PROGRAM ILLUSTRATES THE WRITE IN THE FILE().

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
		
int main(){
	student s1;
	//s1.getdata();
	//s1.Addrecord();
	char ch='n';
	int i=0,c;
	
	do{
		s1.Addrecord();
		cout<<"Do you want to add more [Y/N]"<<endl;
		cin>>ch;
		i++;
		
	}	
	while(ch!='n');
		
		cout<<"Data Updated Successfully"<<endl;
		
	
	//return 0;
	}
			
