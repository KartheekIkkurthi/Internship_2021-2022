//Multiple inheritance
#include<iostream>
using namespace std;

class Person{
	public:
	void talk(){
	cout<<"He talks"<<endl;
	}
	
	void walk(){
	cout<<"He walks"<<endl;
	}
	
};

class student{
	public:
	void result(){
	cout<<"You are pass"<<endl;
	}
	
	void test(){
	cout<<"You are qualified"<<endl;
	}
};

class ecstudent:public student,public Person{
				public:
				void ec(){
				cout<<"You are true ecian"<<endl;
				}
};

int main(){
	Person p;
	student s;
	ecstudent e;
	p.talk();
	p.walk();
	s.result();
	s.test();
	e.ec();
	e.result();
	e.test();
	e.walk();
	e.talk();
	}
	
