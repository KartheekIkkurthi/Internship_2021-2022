
//Single Inheritance

#include<iostream>
using namespace std;


class Person{
	public:
	void walk(){
	int x=5;
	cout<<x<<endl;
	}
	void talk(){
	int y=6;
	cout<<y<<endl;
	}
	
};

class Doctor:public Person{
		public:
		void yolk(){
		int z=10;
		cout<<z<<endl;
		}
};

int main(){
	Person p1;
	Doctor d1;
	d1.walk();
	d1.talk();
	}
