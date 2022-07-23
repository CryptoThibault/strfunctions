#include <stdio.h>

int _strcmp(char *s1, char *s2)
{
  while (*s1 != 0)
  {
    if (*s1++ != *s2++)
      break;
  }
  return *s1 - *s2;
}

int main()
{
  printf("%i\n", _strcmp("Hello world!", "Hello world!"));
  printf("%i\n", _strcmp("Hello world!", "Hello!"));
  return 0;
}