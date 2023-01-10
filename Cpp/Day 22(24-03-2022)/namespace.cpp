
//	The Program illustrates the 

#include <iostream>
using namespace std;
namespace test {
	int upperbound;
	int lowerbound;
	class counter {
		int count;
		public:
		counter(int n) {
		if(n <= upperbound) {
				count = n;
			}
	else { count = upperbound; }
}
void reset(int n) {
		if(n <= upperbound) {
		count = n;
		}
		}
int run() {
	if(count > lowerbound) {
	return count--;
}
else {
	return lowerbound;
}
}
};
}

int main() {
	
	test::upperbound = 100;
	test::lowerbound = 0;
	test::counter c1(10);
	int i;
		do {
			i = c1.run();	//Once object is created we don't need::
			cout << i << " ";
		}while(i > test::lowerbound);
		cout << endl;
		test::counter c2(20);
		do{	
			i=c2.run();
			cout<< i << " ";
	
		}while(i > test::lowerbound);
		cout << endl;
		c2.reset(100);
		test::lowerbound=90;
		do{
		i=c2.run();
		cout<< i << " ";
		}
		while (i > test::lowerbound);
	
	
return 0;
}
