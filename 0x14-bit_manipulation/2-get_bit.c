#include "main.h"

/**
  * get_bit - returns the value of a bit at a given index.
  * @n: the decimal number whose binary equivalent is to be analysed.
  * @index: the index, starting from 0, whose bit value is to be returned.
  * Return: the value of the bit at index.
  */
int get_bit(unsigned long int n, unsigned int index)
{
	int binLen, bit;
	bin_list *head;

	head = binEq(n);
	binLen = bin_length((unsigned long int)n);
	if ((int)index > (binLen - 1))
	{
		return (-1);
	}
	while (head != NULL)
	{
		if ((head->index) == (int)(index))
		{
			bit = (head->value);
		}
		head = head->next;
	}
	return (bit);
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
	int r, mod, i;

	i = (bin_length(u) - 1);
	r = u;
	while (r > 0)
	{
		mod = r % 2;
		new = malloc(sizeof(bin_list));
		if (new == NULL)
		{
			return (NULL);
		}
		if (i == (bin_length(u) - 1))
		{
			head = new;
			new->next = NULL;
		} else
		{
			new->next = head;
		}
		/*Set the values of new*/
		new->value = mod;
		new->index = i;
		head = new;
		r = r / 2;
		i--;
	}
	return (head);
}
/**
  * print_list - prints all nodes of a bin_list linked list.
  * @h: header to the linked list.
  */
void print_list(bin_list *h)
{
	int i, v;

	if (h == NULL)
	{
		return;
	}
	while (h != NULL)
	{
		i = h->index;
		v = h->value;
		printf("Value at index %d is %d\n", i, v);
		h = h->next;
	}
}
/**
  * bin_length - determines how long a decimal binary equivalent is.
  * @n: the decimal number that is to be evaluated.
  * Return: the number of bits that make up a decimal number's binary
  * equivalent.
  */
int bin_length(unsigned int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		n = n / 2;
		i++;
	}
	return (i);
}
