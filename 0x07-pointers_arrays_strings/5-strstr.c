#include "main.h"

/***/

char *_strstr(char *heystack, char *needle)
{
	int i;
	int j;
	int k;
	int n;
	int l;
	int a;
	char *ptr;

	i = 0;
	for (i = 0; needle[i] != '\0'; i++)
		;
	j = 0;
	for (j = 0; heystack[j] != '\0'; j++)
		;
	if (i == 0)
		return (heystack);
	for (k = 0; heystack[k]; k++)
	{
		if (needle[0] == heystack[k])
		{
			ptr = &heystack[j];
			l = k;
			a = 0;
			for (n = 0; n <= i; n++)
			{
				if (needle[n] == heystack[l])
				{
					a++;
				}
				l++;
			}

		}
		if (a == i)
			return (ptr);
	}
	return ('\0');
}
