#include<iostream>
using namespace std;

class Base{
	int x;
	public:
	Base(){
	cout<<"Default of B"<<endl;
	}
};

class Derived:public Base{
		public:
		Derived(){
		cout<<"Default of D"<<endl;
		}
		Derived(int i){
		cout<<"Parameter"<<endl;
		}
};

int main(){
	Base b;
	Derived d1;
	Derived d2(50);
	
}
		
