#include "ch02.h"
int main(int argc,char *argv[])
{
  FILE *fp;
  //char buf[80];
  int i;
  //int ret;
  //memset(buf,0,sizeof(buf));
  if((fp=fopen("./test1.txt","w"))==NULL){
     perror("open failed!\n");
  }
  for(i=0;i<argc;i++){
     fwrite(argv[i],strlen(argv[i]),1,fp);
     printf("%d  Content is %s.    %ld bytes.\n",i,argv[i],strlen(argv[i]));
  }
  //fgets(buf,sizeof(buf),stdin);
  //printf("Content is %s.The size of stream is %ld bytes.\n",argv,sizeof(argv[]));
  //ret = fwrite(buf,1,sizeof(buf),fp);
  //printf("ret=%d\n",ret);
  fclose(fp);
  return 0;
}
