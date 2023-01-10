//Hybrid-Level Inhertiance

//using Virtual class

#include<iostream>
using namespace std;

class Person{
	public:
	int x=2,y=5;
	void talk(){
	cout<<"He talks"<<endl;
	}
	
	void walk(){
	cout<<"He walks"<<endl;
	}
	
};

class student:virtual public Person{
	public:
	void result(){
	cout<<"You are pass"<<endl;
	}
	
	void test(){
	cout<<"You are qualified"<<endl;
	}
};

class ecstudent:virtual public Person{
				public:
				void ec(){
				cout<<"You are true ecian"<<endl;
				}
};

class order:public student,public ecstudent{
					public:
					void Dead(){
					cout<<"Congrats you are alive"<<endl;
					}
};

					
int main(){
	Person p;
	student s;
	ecstudent e;
	order o;
	//p.talk();
	//p.walk();
	s.result();
	s.test();
	s.talk();
	s.walk();
	e.ec();
	e.walk();
	e.talk();
	o.result();
	o.test();
	o.ec();
	o.Dead();
	o.talk();
	o.walk();
	
	}
	
