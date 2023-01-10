//The program is of pointer _derived class.


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
		public:
		int i;
		void show(){
		
		cout<<"Parameter is x:"<<x<<" y :"<<i<<endl;
		
		}
};

int main(){
	Base b;
	Derived d;
	Base *bptr;
	bptr=&b;
	cout<<"Base class pointer of base class object"<<endl;
	bptr->x=20;
	bptr->display();
	bptr=&d;
	bptr->x=30;
	cout<<"Base class pointer assigned  of derived class object"<<endl;
	bptr->display();
	Derived *dptr;
	dptr=&d;
	cout<<"Derived Class of derived class object"<<endl;
	dptr->i=50;
	dptr->show();
	}
	
	

