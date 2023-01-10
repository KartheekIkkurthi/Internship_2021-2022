//Create a class student having private members marks,name and public members rollno,getdata(),printdata(). Demonstrate concept of pointer to class members for array of 3 objects.

//Try Creating pointer of the derived class and access the base class objects using it.


#include<iostream>
using namespace std;

class Clas{
	private:
	int marks,name;
	public:
	
	void getdata(){
		cout<<"Enter the Name:"<<endl;
		cin>>name;
		cout<<"Enter the marks:"<<endl;
		cin>>marks;			
		
		}
	int x;
	void rollno(){
		
		cout<<"Enter the roll:"<<endl;
		cin>>x;
		
		}
		
	void printdata(){
		cout<<"Name:"<<name<<endl;
		cout<<"Roll No:"<<x<<endl;
		cout<<"Marks:"<<marks<<endl;	
		}
		
};

class derived:public Clas{
};


int main(){
	derived d;
	derived *ptr;
	ptr = &d;
	ptr->getdata();
	ptr->printdata();
	
	return 0;
}
	

