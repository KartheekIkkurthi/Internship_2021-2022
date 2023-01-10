//Search and Sequence
//Consider an integer array ‘a’ of size 10, where the value of the array elements are
//{1,5,4,8,9,2,0,6,11,7}. Write a program to
//▪ Find whether the given element exists in an array or not. If the element exists in an
//array, display YES else NO.
//▪ To print a number following a sequence of elements in an array i.e., 15489206117.

#include<stdio.h>
#include<stdlib.h>



int main(){
		int a[10]={1,5,4,8,9,2,0,6,11,7};//Initializing the Array
		int i,x;
		printf("--------PART-I of the Question--------\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("Enter the number to be checked in the Array: ");//Input from the user to check the number
		scanf("%d",&x);
		//Loop for comparasion of the Array Elements
		for(i=0;i<10;i++){
			if(a[i]==x){
			//If True 
				printf("-----YES-----\n");
				}
			else{
			//If False
				printf("-----NO-----\n");
				}
			}
		printf("---------Part-II of the Question-----------\n");
		printf("\n");
		printf("\n");
		//Loop for printing the elements of the array in a Sequence.
		for(i=0;i<10;i++){
				printf("%d",a[i]);
				}
		printf("\n");
return 0;
}
