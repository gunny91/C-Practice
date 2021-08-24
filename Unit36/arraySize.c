
#include<stdio.h>

int main()
{
   int temp[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9 , 10};
   
  
   //  printf("%d\n", sizeof(temp));
   //  printf("%d\n", sizeof(temp) / sizeof(int));
   for(int i =0; i < sizeof(temp)/sizeof(int); i++)
   {
     printf("%d\n", temp[i]);
   }
   
   for(int i = sizeof(temp) /sizeof(int); i >=0; i--)
   {
     printf("%d\n", temp[i]);
   }
   return 0;
}
