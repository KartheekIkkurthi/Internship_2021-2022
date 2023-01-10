//Write a function that receives marks received by a student in 3 subjects
//and returns the total and percentage of these marks. Call this function from
//main( ) and print the results in main( ).

#include<stdio.h>
//Function declaration
int total(int a,int b,int c);
float percent(float a ,float b,float c);
//main 
int main(){
	int a,b,c;
	int Result;
	float Grade;
	//Recieving the marks
	printf("Enter the marks of the Student as mentioned in sequence:\n");
	printf("Enter the marks for Science out of 100:");
	scanf("%d",&a);
	printf("\nEnter the marks for Social out of 100:");
	scanf("%d",&b);
	printf("\nEnter the marks for Maths out of 100:");
	scanf("%d",&c);
	//Calling the function
	Result =total(a,b,c);
	Grade =percent(a,b,c);
	printf("The result in total is %d ",Result);
	printf("\nThe Grade in percent is %f",Grade);
	return 0;

}
//Function for total of the marks
int total(int a,int b, int c){
	int tota;
	//Total calculation
	tota=a+b+c;
	//return tota
	return tota;
	}
//Function for percentage of the marks
float percent(float a,float b,float c){
	float perc;
	//Total Percentage
	perc=((a+b+c)/300)*100;
	//return perc
	return perc;
	}


