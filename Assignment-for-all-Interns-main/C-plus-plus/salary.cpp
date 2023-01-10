/*Write a program by creating an 'Employee' class having the following functions and print the final salary.
1 - 'getInfo()' which takes the salary, number of hours of work per day of employee as parameters
2 - 'AddSal()' which adds $10 to the salary of the employee if it is less than $500.
3 - 'AddWork()' which adds $5 to the salary of the employee if the number of hours of work per day is more than 6 hours.	   
*/
#include<iostream>
using namespace std;
//Class Creation named Employee
class Employee{
	double salary;//Initialisation
	int hours;
	public:
	Employee(){}
	//Function Creation getInfo(),,AddSal(),,AddWork(),,displaySal()..
	void getInfo(){
			cout<<"Enter the salary of the Employee"<<endl;
			cin>>salary;
			cout<<"Enter the number of hours worked in a day"<<endl;
			cin>>hours;
			}
	void AddSal(){
			if (salary < 500)
			 salary +=10;
			}
					
	void AddWork(){
			if(hours > 6)
			salary +=5;
			}
			
	void displaySal(){
			cout<< salary;
			}
};
//Main program
int main(){
	int num;
	cout << "Enter the number of employees: ";
	cin >> num;
	//Initialize the Array of Employee
	Employee* emp=new Employee[num];
	for (int i = 0; i < num; i++)
	{
	//Entering the data in Array of Employee
		emp[i].getInfo();
		emp[i].AddSal();
		emp[i].AddWork();
	}
	for (int i = 0; i < num; i++)
	{
	//Final Output of each Employee after Execution
		cout << "\nThe final salary of the employee "<< i <<" is:"<<endl;
		emp[i].displaySal();
	}
}

