/*Write a cpp program that shows a menu: 
1: enter student detail 2: find student 
If the user selects 1: then it will ask for some details like: ID, student name, branch, Location. Save all these information in the file. Each student's details will be stored in one line. 
If the user selects 2: ask for the ID from the user that is needed to be searched. Then look for this id in the file (database). If it is available then return all the information about the particular student. If the ID is not available, then print some error message. 
H OH 
Note: Make sure to use exception handling concepts here and think of what could go wrong and put proper try-throw-catch setup in place. 

*/
#include<iostream>
#include<fstream>
#include<exception>
#include<cstring>

using namespace std;

class student
{
	public:
	int id;
	char name[20], branch[20], location[100];

	void getdata()
	{
		cout << "Enter Id, Name, Branch, Location" << endl;
		cin >> id;
		char t1 = getchar();

		cin.getline(name, 20);
		cin.getline(branch,20);
		cin.getline(location, 100);

	}

	void getStudentDetails()
	{
		fstream fin;
		student su;

		try
		{
			fin.open("student_data.txt", ios::app|ios::binary);
			if(!fin)
			{
				throw 'e';
			}
		}
		catch(char c)
		{
			cout << "File is not created" << endl;	//Exception
		}
	

		su.getdata();

		fin.write((char *) &su, sizeof(su));

		fin.close();
	}

	void findStudent()
	{
		int id_no, count=0;
		fstream fin;
		student su;

		cout << "Enter the Student Id" << endl;
		cin >> id_no;

		try
		{
			fin.open("student_data.txt", ios::in|ios::binary);
			if(!fin)
			{
				throw 'e';
			}
		}
		catch(char c)
		{
			cout << "File is not created" << endl;	//Execption
		}

		while(!fin.eof())
		{
			fin.read((char *) &su, sizeof(su));
			count++;
		}
		fin.close();

		fin.open("student_data.txt", ios::in|ios::binary);

		for(int i=0; i<count-1; i++)
		{
			fin.read((char *) &su, sizeof(su));

			if(id_no == su.id)
			{
				cout << "Id number: " << su.id << endl;
				cout << "Name: " << su.name << endl;
				cout << "Branch: " << su.branch << endl;
				cout << "Location: " << su.location << endl;

				break;
			}
			else
			{
				try
				{
					if(i == count-2)
					{
						throw id_no;
					}
					else
					{
						continue;
					}
				}
				catch(int n)
				{
					cout << " Id not found" << endl;	//Exception
				}
			}
		}
	}

	// function to display details
	void display()
	{
		fstream f;
		student su;
		int count=0;

		f.open("student_data.txt", ios::in|ios::binary);

		while(!f.eof())
		{
			f.read((char *) &su, sizeof(su));
			count++;
		}
		f.close();

		f.open("student_data.txt", ios::in|ios::binary);

		for(int i=0; i<count-1; i++)
		{
			f.read((char *) &su, sizeof(su));

			cout << "Id no: " << su.id << endl << "Name: " << su.name << endl;
			cout << "Branch name: " << su.branch << endl << "Location: " << su.location << endl;
		}

		f.close();
	}

};//End of Class

int main(){//Main Program
	student s1;
	int choice=1;
	fstream fin;

	while(choice != 0)
	{
		cout << "\nEnter your choice" << endl << "1: Enter Student details" << endl << "2: Find Student Details" << endl << "3: Display Student Details " << endl;
		cout <<"4: Exit" << endl;
		cin >> choice;
		cout << endl;

		switch(choice)
		{
			case 1:
				s1.getStudentDetails();
				break;
			case 2:
				s1.findStudent();
				break;
			case 3:
				s1.display();
				break;
			case 4:
				choice = 0;
				break;
			default:
				cout << "Input is not valid" << endl;
		}
	}

	return 0;
}
