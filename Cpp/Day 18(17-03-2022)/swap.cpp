// Q. Write a program to perform Swap()

//It should be able to swap data type of integer,string and double

// THIS PROGRAM NEEDS TO BE DONE BY PASS BY REFERERNCE OF THE DATA //

#include<iostream>
using namespace std;

template <typename T>
void swap1(T *num1,T *num2){
	T temp;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}
	
int main(){	
	int A=10,B=20;
	char C='a',D='z';
	double E=2.22,W=4.54;
	
	swap1(&A,&B);
	cout<<"Integer swap:" << A << " and " << B <<endl;
	swap1(&C,&D);
	cout<<"String Swap : "<<C<<" and "<<D<<endl;
	swap1(&E,&W);
	cout<<"Double Swap : "<<E<<" and "<<W<<endl;
	cout<<"End"<<endl;
	return 0;
	
	
}
