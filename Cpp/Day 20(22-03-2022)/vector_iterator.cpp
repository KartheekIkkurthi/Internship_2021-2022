// 		This program demonstrates the sample us of vector iterator

#include<iostream>
#include<vector>
using namespace std;


int main(){
	vector<char> v(10);	// Create a vector of length 10
	vector<char>::iterator p;	//Create an iterator
	int i;		//Assign elements in vector a value
	
	p=v.begin();
	i=0;
	while(p !=v.end()){
		*p=i+'a';
		p++;
		i++;
	}	//End of While
	
	cout<<"Original Contents: \n";
	p=v.begin();
	
	while(p != v.end()){
		cout<<*p<<" ";
		p++;
		}
		//Change contents of vector
	p=v.begin();
	
	while(p != v.end()){
		*p=toupper(*p);
		p++;
		}
	cout<<"Modified Contents"<<endl;
	p=v.begin();
	while(p !=v.end()){
		cout<<*p<<" ";
		p++;
		}
		
	return 0;
}//End
