#include <unistd.h>

/**
* _putchar - writes the character to standard output
* @c: the character to print
* Return: 0 on success, 1 on error and errno is set
*/

int _putchar(char c)
{
  return(write(1, &c, 1));
}
