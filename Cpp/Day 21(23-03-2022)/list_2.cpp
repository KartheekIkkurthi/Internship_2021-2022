
//	This program illustrates the use of lists while also printing them in reverse order to understand the the progrma run list.cpp once then you can compare the output and understand


#include<iostream>		//Standard
#include<list>
using namespace std;

int main(){
	list<int> lst;	//Create an empty list
	int i;
	for(i=0;i<10;i++)
	lst.push_back(i);	//end of for
	cout<<"Size = "<<lst.size()<<endl;
	cout<<"Contents: ";
	list<int>::iterator p=lst.begin();
	while(p!=lst.end()){
		cout<< *p<<" ";
		p++;
		}	//End of While
	cout<<"n\n";
	
	p=lst.begin();
	while(p!=lst.end()){
		*p=*p + 100;
		p++;
		}	//End of While
		cout<<"Contents modified";
		p=lst.end();
		while(p!=lst.begin()){
			p--;
			cout<< *p << "  ";
			
			}	//End of While
	return 0;

}
