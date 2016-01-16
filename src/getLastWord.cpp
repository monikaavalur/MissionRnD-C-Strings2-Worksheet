/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>
#include<stdio.h>
char *strip_spaces(char * word);
char * get_last_word(char * str)
{
	if (str == NULL)
		return NULL;
	if (str == "")
		return "";
	char * trimmed;
	trimmed = strip_spaces(str);
	
	int index1 = 0;
	int len = 0;
	for (int index = 0; trimmed[index] != '\0'; index++)
		len++;
	char  *LastWord = (char*)malloc(len*sizeof(char));
	for (int index = len - 1; index >= 0; index--)
	{
		if (trimmed[index] == ' ')
			break;
		else
		{
			LastWord[index1] = trimmed[index];
		}
		index1++;
	}
	LastWord[index1] = '\0';
	int c = 0;
	int d = 0;
	int length = 0;

	for (int index = 0; LastWord[index] != '\0'; index++)
		length++;

	char *str1 = (char*)malloc(length*sizeof(char));

	for (c = length - 1, d = 0; c >= 0; c--, d++)
		str1[d] = LastWord[c];

	str1[d] = '\0';

	return str1;
}
char *strip_spaces(char * str)
{
	int l = 0;
	int n = 0;
	char * begin;
	char * end;

	for (int i = 0; str[i] != '\0'; i++)
		l++;

	n = l;
	begin = str;

	end = str + l - 1;
	while (*end == ' ') {
		end--;
		n--;
	}

	char * copy = (char*)malloc(n*sizeof(char));
	int i;

	for (i = 0; i < n; i++)
	{
		copy[i] = begin[i];
	}
	copy[n] = '\0';
	return copy;
}
