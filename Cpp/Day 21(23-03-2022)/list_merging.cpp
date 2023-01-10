
//	This program illustrates the use of lists as well as sorting and also merging them.


// The program here makes sure it compare between the two lists and print the smallest one first. 



#include<iostream>		//Standard
#include<list>
using namespace std;

int main(){
	list<int> lst1,lst2;	//Create an empty list
	int i;
	for(i=0;i<10;i+=2){
		lst1.push_back(rand()%20);
		}
	for(i=1;i<11;i+=2){
		lst2.push_back(rand()%20);
		}
	cout<<"Contents of lst1: ";
	list<int>::iterator p=lst1.begin();
	while(p!=lst1.end()){
		cout<< *p<<" ";
		p++;
		}	//End of While
	cout<< "\n\n";
	cout<<"Contents of lst2: \n"<<endl;
	
	p=lst2.begin();
	while(p!=lst2.end()){
		cout<<*p<<" ";
		p++;
		}	//End of While
		cout<<"\n\n";
		//Sort the list
		//lst1.sort();
		/*p=lst1.begin();	//Contents of the list 1
		while(p!=lst1.end()){
			cout<< *p << "  ";
			p++;
			}	//End of While
		*/	
	//Now,Merge the list1 and list2 into: list1
	
	lst1.merge(lst2);
	if(lst2.empty())
	cout<<"lst2 is now empty \n";
	cout<<"Contents of the lst1 after merge: \n";
	p=lst1.begin();
	while(p!=lst1.end()){
		cout<< *p << " ";
		p++;
		} 
	return 0;

}
