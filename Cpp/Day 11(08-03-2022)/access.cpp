//Granting Access to the derived class //
#include<iostream>
using namespace std;

class base{
	public:
	int a=5,b=9;
	void show(){
	cout<<"A is:"<<a<<"B is:"<<b<<endl;
	}
	private:
	int z=7;
	
};

class derived:public base{
		public:
		void display(){
		cout<<"Z is:"<<z<<endl;
		}
};


int main(){
	base b;
	derived d;
	d.show();
	d.display();
	
	return 0;
	
}
