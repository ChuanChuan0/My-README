#include<stdio.h> 
#include<string.h>

#define N 7

int main(int argc,char*argv[])
{
	char *week[N]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
	int i;
	
	for(i=0;i<N;i++){
		if(strcmp(argv[1],week[i])==0){
			 printf("\n\n%s is %d.\n",week[i],i+1);
			 return 0;
		}		   
	}
	printf("\n\nNot found!");
	return 0;
}
