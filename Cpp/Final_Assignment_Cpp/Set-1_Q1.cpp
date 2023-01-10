/*Vectors: Write a C++ program, there you take two vectors of names. The program should return a vector that has all the names only once.
	Example: vector1 = [Virendra Sachin, Saurav, Rahul, Laxman]
		vector2 = [Harbhajan, Ashish, Rahul, Yuvraj, Saurav]
		   output = [Virendra Sachin, Saurav, Rahul, Laxman, Harbhajan, Ashish, Yuvraj]*/
		   
		   
#include<iostream>
#include<vector>
#include<string.h>
#include<iterator>
using namespace std;
//Driver Program
int main(){
     	vector<string> vector1;  //declaring vectors
	vector<string> vector2;  
	vector<string>::iterator ptr1;  //iterators of vectors
	vector<string>::iterator ptr2;
	vector<string> output;
	int n;
	cout<<"Number of Elements to be Entered in vector 1 and vector 2:";
	cin>>n;
	cout<<"Elements for Vector 1:";
	for(int i=0;i<n;i++){	//For Loop for entering the Data from the User for Vector 1
		        string s1;
		        cin>>s1;
		        vector1.push_back(s1);
	     }
	cout<<"enter vector2 elements:";
	for(int i=0;i<n;i++){	//For Loop for Entering the Data From the User for Vector 2
		        string s1;
		        cin>>s1;
		        vector2.push_back(s1);
	     }
	     
	     //Now Comparing the Iterator
	for (ptr1 = vector1.begin(); ptr1 < vector1.end(); ptr1++){
			            for (ptr2 = vector2.begin(); ptr2 < vector2.end(); ptr2++){
					      		if(*ptr2==*ptr1)
							vector2.erase(ptr2);
					   }
					   }

        for (ptr1 = vector1.begin(); ptr1 < vector1.end(); ptr1++){
						output.push_back(*ptr1);
	      }
	for (ptr2 = vector2.begin(); ptr2 < vector2.end(); ptr2++){
				                output.push_back(*ptr2);
	      }
	     cout<<"\n\n";
	     cout<<"output:\n";
	     //Displaying the Unique Entities Only.
	for (ptr2 = output.begin(); ptr2 < output.end(); ptr2++){
                         cout<<*ptr2<<"\n";
    		}

}//End Of the Main
