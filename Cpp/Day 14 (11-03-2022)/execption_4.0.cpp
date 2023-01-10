//Program to demonstrate rethrow//

#include<iostream>
using namespace std;

int main(){
	//int a=2;
	int a;
	cout<<"Enter the a number for between 1-3 :"<<endl;
	cin>>a;
	try{
		try {
		 	if (a == 1)
			throw a;
			}//Throw integer type execption
			catch(int x){
			cout<<"\n Exception in inner try-catch block"<<endl;
			throw x;
			}
		}
		
	catch (int a){
		cout<<"The num is 1"<<endl;
		}
	//catch (char A){
		//cout<<"The num is 2"<<endl;
		//}
	//catch(double d){
	//	cout<<"Floating Exception"<<endl;
	//	}
	cout<<"\n END "<<endl;	
	return 0;
}
