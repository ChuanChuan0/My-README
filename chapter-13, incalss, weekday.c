#include<stdio.h> 
#include<string.h>

#define N 7

int main(void)
{
	char str[20]={0};
	char *week[N]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
	int i;
	
	printf("Please enter a string:");
	gets(str);
	
	for(i=0;i<N;i++){
		if(strcmp(str,week[i])==0){
			 printf("\n\n%s is %d.\n",str,i+1);
			 return 0;
		}		   
	}
	printf("\n\nNot found!");
	return 0;
}
