// Excercise


#include<iostream>
using namespace std;
class student{	
		public:
		int z;
		char y[100];
		void roll_no(){
			cout<<"Enter the Roll No"<<endl;
			cin>>z;
			cout<<"Enter the Name "<<endl;
			cin>>y;
			
			}
			
};

class test{
	public:
	int a,b,c,d,e;
	void marks(){
		cout<<"Enter the Marks of Science:"<<endl;
		cin>>a;
		cout<<"Enter the Marks of Social:"<<endl;
		cin>>b;
		cout<<"Enter the Marks of Maths:"<<endl;
		cin>>c;
		cout<<"Enter the Marks of English:"<<endl;
		cin>>d;
		cout<<"Enter the Marks of Computer:"<<endl;
		cin>>e;
		}
};

class result:public student,public test{
					public:
					int total;
					int perc;
					void total_marks(){
					roll_no();
					marks();
					total=a+b+c+d+e;
					cout<<"Total:"<<total<<endl;
					perc=(total*100)/500;
					//perc=perc*100;
					cout<<"Percentage is :"<<perc<<endl;
					}
					
					
};

int main(){
	
	result r;
	r.total_marks();
	return 0;
	}
					
