//			THIS PROGRAM ILLUSTRATES THE DEMO OF USING TEMPLATE 


#include<iostream>
using namespace std;


template <typename T>				//Template Creation
T sum(T n1,T n2){
	T rs;
	rs=n1+n2;
	return rs;
	
}
template <typename P>
P sub(P n1,P n2){
	P ss;
	ss=n2-n1;
	return ss;
}

int main(){	
	int A=10,B=20,C;
	long a =11,b=22,c;
	C= sum(A,B);
	cout<<C<<endl;
	c= sum(a,b);
	cout<<c<<endl;
	C=sub(A,B);
	cout<<C<<endl;
	c=sub(a,b);
	cout<<c<<endl;
	
	return 0;
		
}

