#include<iostream>
#include<string>
using namespace std;

class Sclass{					//If we write/mention static then only e.display1() will run//
	private:
	//static int b,
	
	static void display3(){
			cout<<"You are Mad"<<endl;
			}
	public:
	static int a,m;
	static void display1(){
	cout<<"Enter the Colour for AMG"<<endl; 
	//cin>>a;
	cout<<"ENter the Colour for MSport:"<<endl;
//	cin>>m;
	}
	class eclass{
		public:
		int Gwagon,Mtron;
		void display2(){
		cout<<"Enter the Colour for Gwagon"<<endl;
		cin>>Gwagon;
		cout<<"Enter the colour for Mtron"<<endl;
		cin>>Mtron;
		}
		};
		
};

class Mercedes:public Sclass{
		public:
		void display9(){
			cout<<"Aap Ameer Ho"<<endl;
			display1();		//Works
			//display2();		//Doesn't Work
			}
	};
			
class Maruti:public Sclass::eclass{
		public:
			void display4(){
				cout<<"You are not safe"<<endl;
				//display1();		//Doesn't
				display2();		//Works
				}
};		
	
int main(){
	Sclass::eclass e1;		//We require scope resolution for accessing the eclass from sclass//
	//eclass e1;			//Object of eclass
	Mercedes t;			//Object of Mercedes
	Maruti m;			//Object of Maruti
	//e1.display1();		//Works
	//e1.display2();		//Doesn't Works			
	//e1.display3();		//Cannot access the private members
	//t.display1();		//Works
	//t.display2();		//Doesn't Work
	//t.display9();		//Doesn't Work
	//t.display2();		//Doesn't Work
	//t.display3();		//Doesn't Work
	m.display4();			//Works
	m.display2();			//Works
	
	
	return 0;
	
}
