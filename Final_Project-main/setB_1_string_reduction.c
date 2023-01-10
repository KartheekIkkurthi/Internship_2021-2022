#include <stdio.h>
#include <string.h>
//To remove the copy
char* removeCopy(char* str, int n)
{
	if(n == 0){
		return str;
		}
		
	int i,k=0;
	int len = strlen(str);
	
	for(i=1;i<len;i++){
				if (str[i-1] !=str[i]) {
					str[k++]=str[i-1];
					}
				else {
					while (i<len && str[i-1] == str[i]) {
					i++;
					}
				}
			}
	str[k++]=str[i-1];
	str[k]='\0';
	if(k!=n) {
		return removeCopy(str,k);
		}
		return str;
		
}
int main(void)
{
		int p;
		printf("Enter the length of string:\n");
		scanf("%d",&p);
		char str[p];
		printf("Enter the String :\n");
		scanf("%s",str);
		int n= strlen(str);
		printf("%s",removeCopy(str,n));
		
		return 0;
		}
		
