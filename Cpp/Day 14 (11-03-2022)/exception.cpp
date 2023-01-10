#include<iostream>
using namespace std;

int main(){
	int n1,n2,ans;
	cout<<"Enter the Number 1:"<<endl;
	cin>>n1;
	cout<<"Enter the Number 2:"<<endl;
	cin>>n2;
	try{
		if(n2==0)
		throw n2;//Statment 1
		else{
			ans=n1/n2;
			cout<<"Result"<<ans<<endl;
		}
	}
	
	catch(int x){
		cout<<"Can't Divide by:"<<x<<endl;
		}
cout<<"\n THE PROGRAM ENDED"<<endl;
	return 0;
}
