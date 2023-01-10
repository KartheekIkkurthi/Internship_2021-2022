
	//This program illustrates the Maps:Storing class Objects

#include<iostream>
#include<map>
#include<cstring>
using namespace std;

class name{		//First Class
	char str[40];
	public:
		name(){
			strcpy(str,"");
			}
		name(char *s){
			strcpy(str,s);
			}
		char *get(){
			return str;
			}
};
// Must define less than the relative to name objects.

bool operator<(name a,name b){
	return strcmp(a.get(),b.get())<0;	//true or false
	}

class phoneNum{		//Another Class
	char str[80];
		public:
			phoneNum(){
				strcmp(str,"");
				}
			phoneNum(char *s){
				strcpy(str,s);
				}
			char *get(){
				return str;
				}
};

int main(){	
	map<name,phoneNum> directory;
	//put names nad numbers into the map
	directory.insert(pair<name,phoneNum>(name("Emp1"),phoneNum("555-1111")));
	directory.insert(pair<name,phoneNum>(name("Emp2"),phoneNum("555-2222")));
	directory.insert(pair<name,phoneNum>(name("Emp3"),phoneNum("555-3333")));
	directory.insert(pair<name,phoneNum>(name("Emp4"),phoneNum("555-4444")));
	
	//Given name ,find the number
	
	char str[80];
	cout<<"Enter the name:";
	cin>>str;
	map<name,phoneNum>::iterator p;	//Iterator
	p= directory.find(name(str));	//find() function for search operation
	if(p != directory.end()){
		cout<<"Phone Number:"<<p->second.get();
		}
	else{
		cout<<"Name no in the Directory. \n";
		}
		
	return 0;
	
}
