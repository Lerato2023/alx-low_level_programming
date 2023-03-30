#include "main.h"
/**
 * _strcmp - compare two strings
 * @s1: string 1
 * @s2: string 2
 * Return: compared results
 */
int _strcmp(char *s1, char *s2)
{
while (((*s1 != '\0') && (*s2 != '\0')) && (*s1 == *s2))
{
s1++;
s2++;
}
if (*s1 == *s2)
{
return (0);
}
else
{
return (*s1 - *s2);
}
}
