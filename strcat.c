#include <stdio.h>

char *_strcat(char *s1, const char *s2)
{
  while (*s1 != 0)
    s1++;
  while (*s2 != 0)
    *s1++ = *s2++;
  *s1 = 0;
  return *s1;
}

int main()
{
  printf("%s\n", _strcat("Hello ", "world!"));
  return 0;
}