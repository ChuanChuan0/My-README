#include<stdio.h>
int filter(char str[])
{
	int i,j=0,n=0;
	for(i=0;str[i]!='\0';i++)
{
	if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
	{
		n++;
		str[j]=str[i];
		j++;
	}
}
return n;
}
int main()
{
	int i;
	char a[50];
  printf("Pls input a sentence:\n")	;
  for(i=0;i<50;i++) 
  {
  	a[i]=getchar();
  	if(a[i]=='\n')
  	{
	  	break;
	  }
  }
 printf("total letters: %d\n",filter(a)) ;
 printf("after filter: ");
 for(i=0;(a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z');i++)
 {
   printf("%c",a[i]);
 }
}