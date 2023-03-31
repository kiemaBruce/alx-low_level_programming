#include "main.h"

/**
  * cap_string - capitalizes all words of a string
  * @s: the string to be capitalized
  * Return: pointer to the capitalized string
  */
char *cap_string(char *s)
{
	int i, slength;

	slength = 0;

	while (s[slength])
	{
		slength++;
	}
	for (i = 0; i < slength; i++)
	{
		if (s[i] > 96 && s[i] < 123)
		{
			/*Check for word separators*/
			if (s[i - 1] == ' ' || s[i - 1] == ',' || s[i - 1] ==
					';' || s[i - 1] == '.' || s[i - 1] ==
					'!' || s[i - 1] == '?' || s[i - 1] ==
					'"' || s[i - 1] == '(' || s[i - 1] ==
					')' || s[i - 1] == '{' || s[i - 1] ==
					'}' || s[i - 1] == '\n' || s[i - 1] ==
					'\t')
			{
				s[i] = s[i] - 32;
			}
			/*Check for beginning of sentences*/
			if (i == 0)
			{
				s[i] = s[i] - 32;
			}
		}
	}
	return (s);
}
