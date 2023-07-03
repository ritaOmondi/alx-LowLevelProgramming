#include "main.h"
#include <stdio.h>
#include <stddef.h>
/**
 * _strstr - function finds the first occurrence of the substring
 * @char : input
 * @haystack : input
 * @needle :input
 * Return: A pointer  to the beginning of the located substring
 * or NULL  if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{

	for (;*haystack != '\0'; haystack++)
	{
	char *first = haystack;
	char *second = needle;

	while (*first == *second && *second != '\0')
	{
	first++;
	second++;
	}
	if (*second == '\0')
	return (haystack);
	}
	return (NULL);
}
