#include "main.h"

int find_strlen(char *s);
int check_palindrome(char *s, int len, int index);
int is_palindrome(char *s);

/**
  * is_palindrome - checks if string is a palindrome
  * @s: string to be checked
  * Return: check code
  */
int is_palindrome(char *s)
{
	int index = 0;
	int len = find_strlen(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, len, index));
}

/**
  * check_palindrome - checks if the word is a palindrome
  * @s: string to be checked
  * @len: length
  * @index: index of string
  * Return: check code
  */
int check_palindrome(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
		return (1);
	if (s[index] == s[len - index - 1])
		return (check_palindrome(s, len, index + 1));

	return (0);
}

/**
  * find_strlen - finds the string length
  * @s: string to be checked
  * Return: len
  */
int find_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += find_strlen(s + len);
	}

	return (len);
}
