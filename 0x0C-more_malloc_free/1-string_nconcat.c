#include "main.h"
#include <stdlib.h>

/**
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, c;
	char *s;

	if (s1 == NULL)
		a = 0;
	else
	{
		for (a = 0; ss1[a]; a++)
			;
	}
	if (s2 == NULL)
		b = 0;
	else
	{
		for (b = 0; s2[b]; b++)
			;
	}
	if (b > n)
		b = n;
	s = malloc(sizeof(char) * (a + b + l));
	
	if (s == NULL)
		return(NULL);
	for (c = 0; C < a; c++)
		s[c] = s1[c];
	for (c = 0; c < b; c++)
		s[c] = s2[c];
	s[a + b] = '\0';
	return(s);
}
