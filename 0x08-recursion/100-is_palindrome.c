#include "main.h"

/**
 * _ind - count the index of string s
 *
 * @s: input string
 * @len: input of initial length 0
 *
 * Return: index of string
*/

int _ind(char *s, int len)
{
	if (*s == '\0')
		return (len - 1);
	return (_ind(s + 1, len + 1));
}
/**
 * palindrome - check if this string is plaindrome or not
 *
 * @s : input string
 * @f : first index
 * @l : last index
 *
 * Return: 1 if the string is palindrome and 1 if isn`t
*/

int palindrome(char *s, int f, int l)
{
	if (s[f] != s[l])
		return (0);
	if (f >= l)
		return (1);
	return (palindrome(s, f + 1, l - 1));
}
/**
 * is_palindrome - a function that returns 1
 * if a string is a palindrome and 0 if not
 *
 * @s : input string
 *
 * Return: 0 or 1
*/

int is_palindrome(char *s)
{
	return (palindrome(s, 0, _ind(s, 0)));
}
