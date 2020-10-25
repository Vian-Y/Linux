#include "ch2.h"
int main(){
   int ret;
   int a = 10,b = 2;
   int c=a+b; 
   printf("2-2 is running!\n");
   printf("2-2's second gram,c = %d",c);
   ret = write(1,"Hello world!\n",13);

   sleep(40);
   exit(0);
}
