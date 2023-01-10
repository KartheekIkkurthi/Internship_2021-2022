
#include<iostream>
using namespace std;

template<typename P,typename Q>
void add(P num1, P num2){
	P rs;
	rs=num1+num2;
	cout<<"Add: "<<rs<<endl;
	return rs;
	}
template<typename P,typename Q>
void mul(P num1, Q num2){
	
	cout<<"MUL : "<<<<endl;
	
	}
	
int main(){
	int S=33,M=44,z;
	double s=43.89,m=33.21,Z;
	z=add(S,M);
	cout<<z<<endl;
	Z=mul(s,m);
	cout<<Z<<endl;
	
	return 0;
	
}
	
