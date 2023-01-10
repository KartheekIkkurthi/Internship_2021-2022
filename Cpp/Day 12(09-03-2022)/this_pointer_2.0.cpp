//The code to demonstrate the base class constructor
#include<iostream>
using namespace std;
//Created the Base class
class Base{
	public:
	int x=5;
	void display(){
	cout<<"Default of B1 is:"<<x<<endl;
	}
};//End of the Class


	
class Derived:public Base{//inheritance
		int i;
		public:
		//Parameterized Constructor
		void show(){
		//The purpose of the program is located here//
		
		i=x;
		cout<<"Parameter is :"<<i<<endl;
		
		}
};

int main(){
	Base *ptr;
	Base b;
	Derived d;
	ptr = &b;//Points to the Base object 
		//We can make ptr to point the object d as follow
	ptr->display();
	ptr =&d;//Base pointer to derived object
	ptr->show()
	return 0;
}
