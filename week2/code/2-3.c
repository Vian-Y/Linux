#include "ch2.h"
int main(){
  // int a = 10,b = 2;
   //int c=a+b; 
   int ret;
   char buf[101]; 
   memset(buf,0,sizeof(buf));   

   int fd;
   fd = open("./text.data",O_CREAT|O_TRUNC|O_RDWR,0644);
   printf("New File Description %d\n",fd);

   sleep(10);
   printf("Please input data <=100:\n");
   fgets(buf,100,stdin);
   ret=write(fd,buf,sizeof(buf));
   printf("ret = %d\n",ret);

   
   //printf("2-2 is running!\n");
   //printf("2-2's second gram,c = %d\n",c);
   //ret = write(1,"Hello world!\n",13);
   //sleep(40);
   exit(0);
}
