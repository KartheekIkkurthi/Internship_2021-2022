

#include<iostream>
using namespace std;
namespace NS1{
	int i;
	namespace NS2{	//a nested namespace
		int j;	
		}	//End Namespace NS2
	}	//End namespace NS1
	
int main(){
	NS1::i = 19;
	//NS2::j= 10;  ERROR,NS2 is not in view
	NS1::NS2::j= 10;	//This is right
	cout<< NS1::i<<" "<<NS1::NS2::j << "\n";
	//Use NS1
	
	using namespace NS1;
	//Now that NS is in view ,Ns2 can be used to refer to j.
	
	cout<< i*NS2::j;
	
	
return 0;

}
