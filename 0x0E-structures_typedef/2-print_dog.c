#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints the data elements of the stuct dog
 *
 * @d: pointer to struct dog
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(null)");
		printf("Age: %F\n", d->age);
		printf("Owner: %s\n", d->owner : d->owner : "(null)");
	}
}
