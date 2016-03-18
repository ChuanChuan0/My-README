#include <stdio.h>
#include <string.h>
int main()
{
 char a[10];
 char week_day[][10]={"sunday","monday","tuesday","wednesday","thursday","friday","saturday"}; 
 printf("Please enter a string:\n");
 gets(a);

 int i;
 for(i=0;i<7;i++)
 {
  if(strcmp(a,week_day[i])==0)
   break;
 }
  printf("%s is %d\n",a,i);

}