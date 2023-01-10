/*Given two sorted arrays, X[ ] and Y[ ] of size m and n each, merge elements of X[ ] with elements of array Y[ ] by maintaining the sorted order, i.e., fill X[ ] with the first m smallest elements and fill Y[ ] with remaining elements.

For example,

Input:
 
X[] = { 1, 4, 7, 8, 10 }
Y[] = { 2, 3, 9 }
 
Output:

X[] = { 1, 2, 3, 4, 7 }
Y[] = { 8, 9, 10 }
*/

#include<stdio.h>
//Main Program
int main()
{
	int a, b, i, d;

	printf("Enter number of elements of array x: \n");
	scanf("%d",&a);

	printf("Enter number of elements of array y: \n");
	scanf("%d",&b);
//Array Declaration
	int x[a], y[b];

	printf("Enter elements of array X: \n");
	for(i=0; i<a; i++)
	{
		scanf("%d",&x[i]);
	}

	printf("Enter elements of array Y: \n");
	for(i=0; i<b; i++)
	{
		scanf("%d",&y[i]);
	}

	d=a+b;
	
	int arr[d],j=0,k, temp=0;

	for(i=0; i<a; i++)
	{
		arr[i]=x[i];
	}

	for(i=a; i<d; i++)
	{
		arr[i]=y[j];
		j++;
	}
//Sorting Loop
	for(i=0; i<d; i++)
	{
		for(k=i;k<d;k++)
		{
			if(arr[i] > arr[k])
			{
				temp = arr[i];
				arr[i] = arr[k];
				arr[k] = temp;
			}
		}
	}

	printf("Elements of array X after Sorting\n");
	for(i=0; i<a; i++)
	{
		x[i] = arr[i];
		printf("%d ",x[i]);
	}
	printf("\n");

	j=0;
	printf("Elements of array Y after Sorting\n");
	for(i=a; i<d; i++)
	{
		y[j] = arr[i];
		printf("%d ",y[j]);
	}
	printf("\n");

	return 0;
}
