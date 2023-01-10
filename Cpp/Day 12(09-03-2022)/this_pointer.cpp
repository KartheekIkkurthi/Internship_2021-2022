//This program is to demonstrate the THIS pointer.

#include<iostream>
using namespace std;
class sample{
	int a,b;
	public:
		void input(int a,int b){
		this->a= a + b;//This pointer is used when local variable's name is same as member's name.
		this->b= a - b;//This pointer is used when local variable's name is same as member's name.
		}
		void output(){
		cout<<"a ="<<a;
		cout<<"\nb ="<<b;
		}
		
};

int main(){
	sample obj1;
	int a=5,b=8;
	obj1.input(a,b);
	obj1.output();
}
