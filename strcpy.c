#include <stdio.h>

char *_strcpy(char *dst, const char *src)
{
  int counter;

  counter = 0;
  while (*dst != 0)
  {
    *dst++;
    counter++;
  }
  while (*src != 0)
  {
    *dst++ = *src++;
    counter++;
  }
  *dst = 0;
  dst = dst - counter;
  return *dst;
}

int main()
{
  char *str[16];

  _strcpy(*str, "Hello world!");
  printf("%s\n", *str);
  return 0;
}