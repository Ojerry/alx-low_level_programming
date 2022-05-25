#include "function_pointers.h"

/**
*print_name - prints a name
*@name: character string
*@f: function to print name 
*/

void print_name(char *name, (*f)(char *))
{

if (name != NULL && f != NULL)
f(name);
}
