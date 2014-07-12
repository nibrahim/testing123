#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int
main(int argc, char *argv[])
{
  char *s;
  if (argc == 2) {
    s = argv[1];
  } else {
    s = (char *)malloc(sizeof(char) * 13);
    strcpy(s, "Hello, world");
  }
  printf("%s\n", s);
  return 0;
}

