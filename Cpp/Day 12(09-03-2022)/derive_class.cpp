//The code to demonstrate the base class constructor
#include<iostream>
using namespace std;
//Created the Base1 class
class Base1{
	int x;
	public:
	Base1(int x){
	cout<<"Default of B1 is:"<<x<<endl;
	}
};//End of the Class


//Creation of class Base2
class Base2{
	int y;
	public:
	Base2(int y){
	cout<<"Default of B2 is :"<<y<<endl;
	}
};//End of the class
	
class Derived:public Base1,public Base2{//inheritance
		public:
		//Parameterized Constructor
		Derived(int i,int x,int y):Base1(x),Base2(y){
		//The purpose of the program is located here//
		//We have called  int x and y from Base1 and Base2 in the Derived Class//
		i=y;
		cout<<"Parameter is :"<<i<<endl;
		
		}
};

int main(){
	//Base1 b1;
	//Base2 b2;
	//Derived d1;
	Derived d2(5,5,7);
	return 0;
	
}
		
