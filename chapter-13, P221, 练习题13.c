#include<stdio.h>
#include<string.h>
void build_index_url(const char *domain, char *index_url)
{
  strcpy(index_url,"http://www.");
  strcat(domain,"/index.html");
  strcat(index_url,domain);
}
int main()
{
	char domain[100],index_url[100];
	printf("Enter a domain name:\n\n");
	gets(domain);
	build_index_url(domain,index_url);
	printf("The URL is: %s",index_url);
}
