#include<iostream>
using namespace std;
class demo{
	int i;
	public:
	demo(int x){
		i=x;
		}
		int getdata(){
		return i;
		}
};

int main(){
	demo d[3]={55,66,77};
	demo *ptr=d;//Similiar to *ptr=&d[0]
	for (int i=0;i<3;i++)
	{
		cout<<ptr->getdata()<<endl;//When the pointer is incremented it points to next element
		ptr++;
		}
	}
	
	
//An integer type pointer shall point to the next integer
//The same is true for the pointer to objects
