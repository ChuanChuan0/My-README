#include<stdio.h>
#include<string.h>
int main()
{
	char ch[30],smallest_word[30],largest_word[30];
		printf("Enter word: \n");
		gets(ch);
		strcpy(smallest_word,ch);
		strcpy(largest_word,ch);
		for(;;)
	{
		printf("Enter word: \n");
		gets(ch);
		if(ch[0]<smallest_word[0])
		{
			strcpy(smallest_word,ch);
		}
		if(ch[0]>largest_word[0])
		{
			strcpy(largest_word,ch);
		}
		if(ch[4]=='\0')
		break;
	}
	printf("Smallest word: %s\n",smallest_word);
	printf("Largest word: %s",largest_word);
}
