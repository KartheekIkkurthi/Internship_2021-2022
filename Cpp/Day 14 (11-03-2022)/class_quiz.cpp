#include<iostream>
using namespace std;


class A{
	public:
	void displayA(){
		cout<<"A"<<endl;
		}
		
};

class B{
	public:
	void displayB(){
		cout<<"B"<<endl;
		}
};

class C:public A{
	public:
	void displayC(){
		cout<<"C"<<endl;
		}
};

class D:public B{
	public:
	void displayD(){
		cout<<"D"<<endl;
		}
		
};

class E:public C,public D{
		public:
		void displayE(){
			cout<<"E"<<endl;
			}
};

class F:public E{
	public:
	void displayF(){
		cout<<"F"<<endl;
		}
		
};

int main(){
	A a;
	B b;
	C c;
	D d;
	E e;
	F f;
	a.displayA();
	b.displayB();
	b.displayC();
	b.displayD();
	e.displayA();
	e.displayB();
	e.displayC();
	f.displayA();
	f.displayC();
	f.displayE();
	f.displayF();
	
	
	return 0;	
}
