#include<iostream>
#include<vector>		//To use the vector we need to add this header library.
using namespace std;

int main(){
	vector<char> v(13);	//Create a vector of length 10
	
	int i;
	//Display original size of v
	
	cout<< "Size= "<<v.size()<<endl;
	
	//Assign the elements of the vector some values
	
	for(i=0;i<=13;i++){
		v[i]=i+'a';
		//displays the content of vector 
		}
		
	cout<<"Current Contents: \n";
	
	for(i=0;i<v.size();i++){
		cout<<v[i]<<" ";
		}
		
	cout<<"\n\n";
	
	
	cout<<"Expanding vector\n";
	
	//put more values onto the end of the vector , it will grow as needed
	
	for(i=0;i<13;i++){
		v.push_back(i+13+'a');
		//Display current size of v
		}
		
	cout<<"Size now = "<<v.size()<<endl;
	
	//Display the contents of the vector
	
	cout<<"Current Contents: \n";
	
	
	for(i=0;i<v.size();i++){
		cout<<v[i]<<" "<<endl;
		}
		
	//Change the contents of the vector
	
	for(i=0;i<v.size();i++){	
		v[i]=toupper(v[i]);
		}
	cout<<"Modified Contents :\n";
	
	for(i=0;i<v.size();i++){
		cout<<v[i]<<" ";
		}
		
	cout<<endl;
	

	
	
	return 0;
	
} //End
