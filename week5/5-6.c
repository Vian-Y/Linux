#include "ch02.h"
int main()
{
  FILE *fp;
  int fd;
  fp = fopen("./write2.c","r");
  fd = fileno(fp);
  printf("fd=%d\n",fd);
  return 0;
}
