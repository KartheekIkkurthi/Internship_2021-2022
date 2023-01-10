#include<stdio.h>
	
	//unsigned int reverse_binary_bits(int);
	void reverse_bits(int );
	
	void main()
	{
		int num, value=0,i=0;
	
		printf("Enter the number:\n");
		scanf("%d",&num);
	
		reverse_bits(num);
		
	}
	
	
	void reverse_bits(int value)
	{
		int a[10] = {0}, b[10]={0}, i=0;
	
		while(value > 0)
		{
			a[i] = value%2;
			i++;
			value = value/2;
		}
	
		printf("\nBefore: ");
		for(int j=i-1; j>=0; j--)
		{
			b[j] = a[j];
			printf("%0x",a[j]);
		}
	
		printf("\nAfter: ");
		for(int j=0; j<i; j++)
		{
			printf("%d",b[j]);
		}
	
		printf("\n");	
	}


