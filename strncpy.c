#include <stdio.h>

char *_strncpy(char *dst, const char *src, int n)
{
  while (*dst != 0)
    dst++;
  while (*src != 0 || n != 0)
  {
    *dst++ = *src++;
    n--;
  }
  *dst = 0;
  return dst;
}

int main()
{
  char *tab[16];

  _strcpy(*tab, "Hello world!", 5);
  printf("%s\n", *tab);
  return 0;
}