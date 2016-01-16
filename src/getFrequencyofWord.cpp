/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>
#include<string.h>
#include<ctype.h>
int count_word_in_str_way_1(char *str, char *word)
{
	int count = 0,len=0;
	for (int i = 0; word[i] != '\0'; i++)
		len++;
	int overlap = 1;
	while (*str != '\0')
	{
		if (strncmp(str++, word, len))
			continue;
		if (overlap != 1)
			str += len - 1;
		count++;
	}
	return count;
}



int count_word_int_str_way_2_recursion(char *str, char *word)
{

	return 0;
}

