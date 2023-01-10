//Write a menu driven program that depicts the working of a library. The menu options should be:
//1. Add book information
//2. Display book information
//3. List all books of given author
//4. List the title of specified book
//5. List the count of books in the library
//6. List the books in the order of accession number
//7. Exit
//Create a structure called library to hold accession number, title of the book, author
//name, price of the book, and flag indicating whether the book is issued or not.




#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
//Function declaration
void add_book();
void disp_book();
void book_auth();
void count_book();
//Creation of Structure named library.
struct library{
		int acc_no;
		char book_title[20];
		char author[20];
		int cost;
		}
b[100];
int count;//Initialisation


//Main Function/Program
int main(){
	int choice;
	while(1){
	//Menu Creation
	printf(">>>>>>>>>>>>>>>>MENU<<<<<<<<<<<<<<<<<<<<<<\n");
	printf("--------------------------------------------");
	printf("\n 1:------>>Enter the book info<<-------\n");
	printf("\n 2:------>>Display book info<<---------\n");
	printf("\n 3:------>>Book author<<---------------\n");
	printf("\n 4:------>>Count book<<----------------\n");
	printf("\n 5:------>>Exit<<----------------------\n");
	printf("\n Enter the choice from the Menu \n");
	scanf("%d",&choice);
	switch(choice)//Switch case for menu orientented result.
	{
	case 1:
	add_book();
	break;
	case 2:
	disp_book();
	break;
	case 3:
	book_auth();
	break;
	case 4:
	count_book();
	break;
	case 5:
	exit(0);
	}
	}
	return 0;
}

//Functions

void add_book(){
	if(count==9){
	printf("\n Sorry no more space is available to store \n");
	return;
	}
	printf("\n Enter the detail of book \n");
	printf("\n Enter accession number of book =");
	scanf("%d",&b[count].acc_no);
	printf("\n Enter the book title=");
	scanf("%s",b[count].book_title);
	printf("\n Enter the name of author=");
	scanf("%s",b[count].author);
	printf("\n Enter the cost of book=");
	scanf("%d",&b[count].cost);
	count++;
}
	
//***********************
void disp_book(){
	int i;
	printf("\n Detail of %d Books in the Library",count);
	for(i=0;i<count;i++)
	{
	printf("\n  %d\n  %s\n  %s\n  %d",b[i].acc_no,b[i].book_title,b[i].author,b[i].cost);
	}
}
//*********************
void book_auth(){
		int i,cnt=0;
		char name[20];
		printf("\n Enter the name of author = ");
		scanf("%s",name);
		for(i=0;i<count;i++)
		{
		if(strcmp(name,b[i].author)==0)
		{
		cnt++;
		printf("\n  %d\n  %s\n  %s\n  %d",b[i].acc_no,b[i].book_title,b[i].author,b[i].cost);
		}
		}
		if(cnt==0)
		printf("\n ---->>>Sorry there is No such book<<<---- \n");
}

//*******************************
void count_book()
{
printf("\n Total no. of book in library are = %d \n",count);
}



