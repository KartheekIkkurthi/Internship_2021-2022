//Execption thrown from outside the 'try' block 


//A list of execptions are deined in <execption> header block
#include<iostream>
#include<execption>
using namespace std;

void Xtest(int test){
	cout<<"Inside Xtest,test is:"<<test<<"\n";
	if(test) throw test;
	
	}
	
int main(){
	cout<<"Start\n"<<endl;
	try{
		cout<<"Inside Try block\n";
		Xtest(0);
		Xtest(1);
		Xtest(2);
		}
		
		catch(int i){
			cout<<"Caught an execption --value is:";
			cout<<i<<"\n";
			}
			cout<<"End";
return 0;
				
}
