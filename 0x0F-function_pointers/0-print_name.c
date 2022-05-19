#include "function_pointers.h"

/**
*print_name - prints a name
*@name:name to be printed
*@f: function which print name
*/

void print_name(char *name, (*f)(char *))
{

if (name == NULL || f = NULL)
return;

f(name);
}
