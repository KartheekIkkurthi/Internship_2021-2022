#include<iostream>
using namespace std;
class ABC{
	public:
	virtual void display(){
	cout<<"This is a parent class"<<endl;
	}
	
};

//Here the inheritanc is of Hierarchy//

class XYZ:public ABC{
	public:
	void display(){
		cout<<"This a child class"<<endl;
		}
};

class PQR:public ABC{
	public:
	void display(){
		cout<<"This is also a child class"<<endl;
		}
};		

int main(){
	XYZ a;
	PQR b;
	ABC* ptr;
	ptr=&a;
	ptr->display();
	ptr=&b;
	ptr->display();
	
	
	
}

