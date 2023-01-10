//	Function template specialization

#include<iostream>
//using namespace std;
//			----->>>As namespace std already has prebuilt swap function. We need to disable this.
template <class X> 
void swap(X &a,X &b){
	X temp;
	temp =a;
	a=b;
	b=temp;
	std::cout<<"Inside Template swap.\n";
	}
//Overides the generic version of swap() for int.

void swap(int &a,int &b){
	int temp;
	temp=a;
	a=b;
	b=temp;
	std::cout<<"Inside int specialization.\n";
}

int main(){
	int i=10,j=20;
	double x=6.6,y=7.7;
	char z='r',w='t';
	std::cout<<"Original i is"<<i<<" j is "<<j<<std::endl;//Use scope resolution for both cout and endl;
	swap(i,j);
	std::cout<<"New i is "<<i<<"j "<<j<<std::endl;
	std::cout<<"Original x is"<<x<<"y "<<y<<std::endl;
	swap(x,y);
	std::cout<<"New x is "<<x<<"y "<<y<<std::endl;
	std::cout<<"Original z is"<<z<<"w"<<w<<std::endl;
	swap(z,w);
	std::cout<<"New z is "<<z<<"w "<<w<<std::endl;
	
	return 0;
	
}


