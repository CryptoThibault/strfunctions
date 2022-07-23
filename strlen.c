#include <stdio.h>

int _strlen(char *s)
{
  char *tmp;

  tmp = s;
  while (*s != 0)
    s++;
  return s - tmp;
}

int main()
{
  printf("%i\n", _strlen("Hello world!"));
  return 0;
}