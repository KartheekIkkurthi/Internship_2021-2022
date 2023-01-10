#include<iostream>
using namespace std;
class base{
	public:
	void dis(){
	cout<<"Hello"<<endl;
	}
	
};
//Had done a variation of private base instead of the public base and wasn't able to access the base class from derived class


-//After makin it public it was accessible from everywhere.
class derived:public base{
		public:
		void show(){
		cout<<"hi"<<endl;
		}
		
};

int main(){
	base b;
	derived d;
	b.dis();
	d.dis();
	d.show();
	
	return 0;
}
