
#include<iostream>
using namespace std;


template<class T1>
void sum(T1 a,T1 b,T1 c){
	cout<<"Sum:"<<a+b+c<<endl;;
	}

template<class T1,class T2>
void Sum(T1 a,T2 b,T1 c){
	cout<<"Sum: "<<a+b+c<<endl;
	}

void ssum(int a,int b){
	cout<<"Sum: "<<a+b<<endl;
}


int main(){	
	int a=5,b=6,c=7;
	sum(a,b,c);
	//cout<<sum(a+b+c);
	int A=6,C=7;
	double B=7.7;
	Sum(A,B,C);
	int X=4,y=6;
	ssum(X,y);
	
	
	return 0;
	
}
