#include <stdio.h>

int _strncmp(char *s1, char *s2, int n)
{
  while (*s1 != 0 && n != 0)
  {
    if (*s1++ != *s2++)
      break;
    n--;
  }
  return *s1 - *s2;
}

int main()
{
  printf("%i\n", _strncmp("Hello world!", "Hello world!", 5));
  printf("%i\n", _strncmp("Hello world!", "Hello!", 10));
  return 0;
}