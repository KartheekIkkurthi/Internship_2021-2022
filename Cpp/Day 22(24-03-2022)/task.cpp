//Kartheek Ikkurthi

#include<iostream>
#include<algorithm>

using namespace std;




int minMax(int a, int b, int c){
	for(int j=0;j<3;j++){
		if(a > b){
			int temp=b;//Smaller than a
			}
		else{
			int temp1=a;//Smaller than b
		}
		if(a > c){
			int tp=c; //Smaller than a
			}
		else{
			int tp1=a;//Smaller than c
				}
		if(b > c){
			int tap=c;//Smaller than b
			}
		else{
			int tap1=b;	//Smaller than c
			}
		}
	cout<< temp << temp1 << tp << tp1 << tap << tap1 ;
	}
int main(){
	int N,S,i;	//N=size of Queue,S=Size of Subset
	cout<<"Enter the Size of Queue"<<endl;
	cin >> N ;
	cout<<"Enter the Size of Subset"<<endl; 
	cin >> S;
	int arr[N];
	int arr1[];
	for(int i=0;i<N;i++){
		cin>>arr[i];
		//i++;
	cout<<"The Elements are"<< arr[i];	
	}
	return 0;
}
