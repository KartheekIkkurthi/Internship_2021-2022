//A pure virtual function is virtual function that has no definition within the base class.

//Syntax -->>> virtual void display() =0

#include<iostream>
using namespace std;

class Shape{
	protected:
		float x;
		float r;
	public:
		void getData(){
				cout<<"Enter the Value for Square: "<<endl;
				cin>>x;
				cout<<"Enter the value of Radius: "<<endl;
				cin>>r;
			}
		virtual float calculateArea() = 0;
		virtual float Area()=0;
		
};

class Square :public Shape{
		public:
			float calculateArea(){
				return x*x;
				}
};

class Circle :public Shape{
		public:
			float Area(){
				return 3.13*r*r;
				}
};

int main(){
	Square q;
	Square *bptr;
	//Pointer
	bptr = &q;
	bptr->getData();//Pointing
	cout<<bptr->calculateArea();
	cout<<bptr->Area();//Calling the function using pointer
	
	}
	
