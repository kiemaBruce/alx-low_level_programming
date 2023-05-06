#include "main.h"

/**
  * clear_bit - sets the value of a bit to 0 at a given index.
  * @n: the decimal number whose binary equivalent is to be manipulated.
  * @index: the position, starting from 0, of the bit that is to be adjusted to
  * 0.
  * Return: the decimal equivalent of the adjusted number.
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int binLen, p;
	bin_list *head = NULL, *temp = NULL;
	unsigned int final;
	const char *b;

	p = *n;
	head = binEq(*n);
	temp = head;
	binLen = 0;

	if (p == 0)
	{
		binLen = 20;
	} else
	{
		while (p > 0)
		{
			p = p / 2;
			binLen++;
		}
	}
	if ((unsigned long int)index > (binLen - 1))
		return (-1);
	while (head != NULL)
	{
		if ((head->index) == (unsigned long int)(index))
		{
			head->value = 0;
			b = create_binary_string(temp, binLen);
			final = binary_to_uint((const char *)b);
			*n = (unsigned long int)final;
			return (1);
		}
		head = head->next;
	}
	return (-1);
}
/**
  * binEq - determines the binary equivalent of a decimal number.
  * @u: the number to be converted into binary.
  * Return: pointer to the head of the linked list which contains the bits that
  * make up the binary equivalent of u.
  */
bin_list *binEq(unsigned long int u)
{
	bin_list *new = NULL, *head = NULL;
	int r, mod, counter, c;
	unsigned long int i;

	counter = i = 0;
	if (u == 0)
	{
		for (c = 0; c < 20; c++)
		{
			new = malloc(sizeof(bin_list));
			if (new == NULL)
			{
				return (NULL);
			}
			if (c == 0)
			{
				head = new;
				new->next = NULL;
			} else
			{
				new->next = head;
			}
			new->value = 0;
			new->index = c;
			head = new;
		}
		return (head);
	}
	for (r = u; r > 0; r /= 2)
	{
		mod = r % 2;
		new = malloc(sizeof(bin_list));
		if (new == NULL)
		{
			return (NULL);
		}
		if (counter == 0)
		{
			head = new;
			new->next = NULL;
		} else
		{
			new->next = head;
		}
		new->value = mod;
		new->index = i++;
		head = new;
		counter++;
	}
	return (head);
}
/**
  * create_binary_string - creates a string of 0s and 1s.
  * @h: header to the linked list that contains the binary representation of a
  * decimal number.
  * @binLen: the number of bits that make up a decimal number's binary
  * equivalent.
  * Decsription: the function takes a bin_list linked list which contains a
  * number's binary representation and converts it into a string of 0s and 1s
  * and adds a trailing '\0'.
  * Return: pointer to the string.
  */
char *create_binary_string(bin_list *h, unsigned long int binLen)
{
	int i;
	char *b;

	b = malloc((sizeof(char)) * binLen);
	if (b == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (h != NULL)
	{
		b[i] = ((h->value) + '0');
		i++;
		h = h->next;
	}
	b[i] = '\0';
	return (b);
}
/**
  * binary_to_uint - converts a binary number to an unsigned int
  * @b: pointer to a string of 0 and 1 chars
  * Return: the unsigned int equivalent of the binary number.
  */
unsigned int binary_to_uint(const char *b)
{
	int  i, len, c, z;
	unsigned int r;

	if (b == NULL)
	{
		return (0);
	}
	r = c = len = 0;
	while (b[len])
	{
		len++;
	}
	i = len - 1;
	while (i >= 0)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		z = raise(2, c);
		/*printf("2 raised to %d is: %d\n", c, z);*/
		r = r + ((b[i] - '0') * z);
		/*printf("i: %d, r: %u\n", i, r);*/
		c++;
		i--;
	}
	/*printf("r: %u\n", r);*/
	return (r);
}
/**
  * raise - raises a number to a certain number.
  * @c: the number to be raised.
  * @n: the power that c is to be raised to.
  * Return: the result.
  */
int raise(int c, int n)
{
	int r, i;

	r = c;

	if (n == 0)
	{
		return (1);
	}
	for (i = 1; i < n; i++)
	{
		r = r * c;
	}
	return (r);
}
