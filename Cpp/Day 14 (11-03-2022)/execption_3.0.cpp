#include<iostream>
using namespace std;

int main(){
	//int a=2;
	int a;
	cout<<"Enter the a number for between 1-3 :"<<endl;
	cin>>a;
	try{
		if (a == 1)
		throw a;//Throw integer type execption
		else if(a==2)
		throw 'A';//Throw Character execption
		else if(a==3);
		throw 4.5;//Throw float execption
		}
	catch ( int a){
		cout<<"The num is 1"<<endl;
		}
	catch (char A){
		cout<<"The num is 2"<<endl;
		}
	catch(double d){
		cout<<"Floating Exception"<<endl;
		}
	cout<<"\n END "<<endl;	
	return 0;
}
