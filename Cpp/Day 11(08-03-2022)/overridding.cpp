#include<iostream>
using namespace std;
class ABC{
	public:
	void display(){
	cout<<"This is a parent class"<<endl;
	}
	
};

class XYZ:public ABC{
	public:
	void display(){//Overides the display() method of class ABC
		cout<<"This a child class"<<endl;
		}
};

int main(){
	XYZ x;
	x.display();//Method of class XYZ invokes,instead of class ABC
	x.ABC::display();
}

