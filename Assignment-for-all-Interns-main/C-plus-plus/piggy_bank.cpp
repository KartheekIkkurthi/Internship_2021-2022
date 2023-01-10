//Suppose you have a Piggie Bank with an initial amount of Rs.50 and you have to add some more amount to it. Create a class 'AddAmount' with a data member named 'amount' with an initial value of Rs. 50. Now make two constructors of this class as follows:
// 1 - without any parameter - no amount will be added to the Piggie Bank
// 2 - having a parameter which is the amount that will be added to the Piggie Bank
// Create an object of the 'AddAmount' class and display the final amount in the Piggie Bank.


#include<iostream>
using namespace std;
//Creation of the Class AddAmount
class AddAmount{
	int amount=50;//Initialize
	public:
	AddAmount(int x){
	//Constructor with Parameter
		int y,amount;
		amount=x;
		cout<<"Enter the Amount to be Deposited in $ : $ "<<endl;
		cin>>y;
		x=x+y;
		cout<<"The Updated Amount in the Piggy Bank is = $"<<x<<endl<<endl;
		}
	
	AddAmount(AddAmount &x){
	//Constructor without any parameter
		amount=x.amount;
		cout<<"The Amount in the Piggy Bank is"<<x.amount<<endl<<endl;
		}
};

int main(){
	AddAmount obj1(50);
	return 0;
}
