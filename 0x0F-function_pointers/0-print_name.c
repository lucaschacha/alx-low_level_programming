#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - writes the name to ptr to function
 * @name: str to add
 * @f: ptr to function
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
        if (name == NULL || f == NULL)
                return;

        f(name);
}
