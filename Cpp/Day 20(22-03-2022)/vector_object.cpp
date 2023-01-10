
#include<iostream>
#include<vector>
using namespace std;



class DailyTemp{
	int temp;
	public:
		DailyTemp(){
			temp=0;
			}
		DailyTemp(int a){
			temp=a;
			}
		DailyTemp &operator=(int x){
			temp=x;
			
		return *this;
		}
};

bool operator<(DailyTemp a,DailyTemp b){
	return a.get_temp()<b.get_temp();
	}
	
bool operator==(DailyTemp a,DailyTemp b){
	return a.get_temp()==b.get_temp();
	}
	 
	 
	 
int main(){
	vector<DailyTemp> v;
	int i;
	for(i=0;i<7;i++)
		v.push_back(DailyTemp(60 +rand()%30);
		cout<<"Farenheit Temperature";
	for(i=0;i<v.size();i++)
		cout<<v[i].get_temp()<<" ";
		cout<< endl;
		
	//Convert from F to C
	
	for(i=0;i<v.size();i++)
	v[i]=(v[i].get_temp()-32)*5/9;
	cout<<"Celcius Temperature";
	for(i=0;i<v.size();i++)
	cout<<v[i].get_temp()<<" ";
	return 0;
	
}//End
		
