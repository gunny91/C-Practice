#include <stdio.h>

int main(void){
 int i;
 int temp[5]={5,4,3,2,1};
 int size = sizeof(temp)/sizeof(temp[0]);
 printf("Array temp element count is %d \n",size);
 
 for(i =0; i < size ; i++){
   printf("temp[%d] = %d\n", i , temp[i]);
 } 
 return 0;
}
