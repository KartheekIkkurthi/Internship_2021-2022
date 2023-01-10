//		Class templates and static variables

#include<iostream>
using namespace std;



template<typename T>
class Add{
	public:
	inline static T i=10;
	void display(){
	
	cout<<++i<<endl;
	return;
}
};
int main(){
	Add<int> ob1;
	ob1.display();
	//fun<int>(1);
	//fun<int>(2);
	//fun<double>(10.1);
	return 0;
}
