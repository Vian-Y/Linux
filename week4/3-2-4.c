#include "ch02.h"
int main(int argc,char *argv[])
{
  FILE *fp;
  char buf[80];

  int ret;
  memset(buf,0,sizeof(buf));
  if((fp=fopen("./test1.txt","w"))==NULL){
     perror("open failed!\n");
  }
  fgets(buf,sizeof(buf),stdin);
  printf("Content is %s.The size of stream is %ld bytes.\n",argv,sizeof(buf));
  ret = fwrite(buf,1,sizeof(buf),fp);
  printf("ret=%d\n",ret);
  fclose(fp);
  return 0;
}
