#include<iostream>
using namespace std;

class Base{
	public:
	virtual void getData(){
			cout<<"Hi"<<endl;
			}
};

class Dv1:public Base{
		public:
		void getData(){
			cout<<"Hi virtually"<<endl;
			}
			
};
class Dv2:public Base{
		public:
		void display(){
			cout<<"Hello"<<endl;
			}
};

int main(){
	Dv2 d;
	Dv2 *ptr;
	ptr =&d;
	ptr->display();
	ptr->getData();
}
	
