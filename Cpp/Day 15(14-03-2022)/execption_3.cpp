//Standard Exception


#include<iostream>
#include<exception>
using namespace std;

int main(){

	try{
		int* myarray=new int[100];//1999999999990000
		
		
		//int need to throw separately
		}
		catch(exception &e){
			cout<<"Std Exception"<<e.what()<<endl;
			}
		
	return 0;
}
