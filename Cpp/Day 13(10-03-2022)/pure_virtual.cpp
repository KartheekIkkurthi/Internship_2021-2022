//A pure virtual function is virtual function that has no definition within the base class.

//Syntax -->>> virtual void display() =0

#include<iostream>
using namespace std;

class Shape{
	protected:
		float x;
	public:
		void getData(){
				cin>>x;
			}
		virtual float calculateArea() = 0;
		
};

class Square :public Shape{
		public:
			float calculateArea(){
				return x*x;
				}
};

int main(){
	Square q;
	Square *bptr;//Pointer
	bptr=&q;
	bptr->getData();//Pointing
	cout<<bptr->calculateArea();//Calling the function using pointer
	
	}
	
