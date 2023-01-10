#include<iostream>
using namespace std;



class Test{
	int a;
	public:
		void read(){
			cout<<"Enter the number ="<<endl;
			cin>>a;
			}
			class EVEN{};//abstract class for execption
			class ODD{};
			void check(){
				if(a%2 ==0){
					throw EVEN();//raise execption//Default Constructor
					}
				else{
					throw ODD();//raise execption// Default Constructor
					}
				}
};
			
			
			
int main(){
	Test t;
	t.read();
	try {
		t.check();
		
		}
	catch(Test::EVEN)	//execption handler block
	{
		cout<<"Number is Even";
		}
		catch(Test::ODD)
		{
			cout<<"Number is Odd";
			}
			
		return 0;
		
	}	
