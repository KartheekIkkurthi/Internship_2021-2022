#include<iostream>
using namespace std;

int main(){
	int n1,n2;
	cout<<"Enter the Number 1:"<<endl;
	cin>>n1;
	cout<<"Enter the Number 2:"<<endl;
	cin>>n2;
	try{
		if(n1 != n2){
		float ans=float(n1/n2);//Convert the data type from int to float
		cout<<"Divison of n1/n2 ="<<ans<<endl;//Output
		if(ans<0)
			throw 'b';//If Ans is less than 0
			
			}
		else
			throw n2;//if n2 is same as n1
			}
			
	
	catch (int x){
		cout<< "Both Numbers are same N1=N2"<<endl;
		}
	catch (int b){
		cout<<"N2 is greater than N1 hence the Answer is in Fraction"<<endl;
		}
	catch(...){
		cout<<"Exception:Unkown"<<endl;
		}
cout<<"\n The Program Ended"<<endl;

return 0;

}
