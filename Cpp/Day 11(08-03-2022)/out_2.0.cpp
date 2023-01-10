#include<iostream>
using namespace std;
class base{
	public:
	void dis(){
	cout<<"Hello"<<endl;
	}
	
};
//Had done a variation of private base instead of the public base and wasn't able to access the base class from derived class


//After makin it public it was accessible from everywhere.
class derived:private base{
		public:
		void show(){
		cout<<"hi"<<endl;
		}
		
};

class hero:public derived{
		public:
		void hew(){
		cout<<"Holla"<<endl;
		}
};

int main(){
	derived d;
	hero h;
	d.dis();
	h.dis();
	d.show();
	h.show();
	h.hew();
	return 0;
}
