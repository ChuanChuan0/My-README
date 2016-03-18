#include<stdio.h>
#include<string.h>
void get_extension(const char *file_name,char *extension)
{
	int i,j,n,m;
	for(i=0;;i++)
	{
		if(file_name[i]=='.')
         {
         	n=i+1;
         	break;
         }
	}
	m=strlen(file_name);
	for(i=n,j=0;i<=m;i++,j++)
	{
		extension[j]=file_name[i];
	}
}
int main()
{
	char file_name[20],extension[20];
	printf("Enter full name of a file:\n");
	gets(file_name);
	get_extension(file_name,extension);
	printf("The extension is: %s",extension);
}
