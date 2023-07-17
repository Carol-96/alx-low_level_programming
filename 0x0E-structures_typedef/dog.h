#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	struct dog myDog;

    myDog.name = "pupsy";
    myDog.age = 2.1;
    myDog.owner = "Caroline Mary";

    printf("Name: %s\n", myDog.name);
    printf("Age: %.1f\n", myDog.age);
    printf("Owner: %s\n", myDog.owner);

    return 0;
}
