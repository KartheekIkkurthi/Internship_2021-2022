/*Q6: The grade of a student can be based on the following criteria:
	Attendance must be more than 50%
	Tests scores must be more than .70
	Total score must be more than 5600 (just go with this number)
The grades are awarded as follows:
	Grade is 10: if all conditions are met
	Grade is 9: if conditions 1 and 2 are met
	Grade is 8: if conditions 3 and 3 are met
	Grade is 7: if conditions 1 and 3 are met
	Grade is 6: if only one condition is met
	Grade is 5: if none of the conditions are met
Write a cpp program to display the grades, based on the scores students secured in individual criteria.
Ex: input 53, 0.6, 5602   res: 10
       Input 45, 0, 4500    res: 6*/
       
#include<iostream>
using namespace std;

class Student{				//CLASS CREATION
	public:
		int Attend;		//DECLARATION OF VARIABLES
		float Test;
		int Total;
			void getData(){		//FUNCTION TO GET THE USER DATA
					cout<<"Enter the Attendance of the Candidate";
					cin>>Attend;
					cout<<"Enter the Test_Scores only in Decimal Format,for example '0.70' ";
					cin>>Test;
					cout<<"Enter the Total Score of the Candidate";
					cin>>Total;
					
					}
};	//END OF THE MAIN CLASS


class Verify:public Student{	//CREATION OF THE DERIVED CLASS
			public:
				//CHECKING THE CONDITIONS IF THEY ARE MET.
			void getVerify(){ 
				if(Attend >= 50 && Test >= 0.70 && Total >=5600){	
							cout<<"The Grade Allocated is '10' "<<endl;
							}
				else if(Attend >= 50 && Test >= 0.70){
						cout<<"The Grade Allocated is '9' "<<endl;
							}
				else if(Test >= 0.70 && Total >=5600){
						cout<<"The Grade Allocated is '8' "<<endl;
							}
				else if(Attend >= 50 && Total >=5600){	
							cout<<"The Grade Allocated is '7' "<<endl;
							}
				else if(Attend >= 50 | Test >= 0.70 | Total >=5600){
						cout<<"The Grade Allocated is '6' "<<endl;
						}
				else{
					cout<<"The Grade Allocated is '5' "<<endl;
					}
				}
					
};	//END OF THE DERIVED CLASS

//DRIVER PROGRAM
int main(){
	Verify v;	//CREATION OF OBJECT
	v.getData();	//CALLING THE FUNCTION 
	v.getVerify();
	
	
	cout<<"The Program Ended"<<endl;
	
	
	return 0;
	
	
}	//END OF MAIN PROGRAM
