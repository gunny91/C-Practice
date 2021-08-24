#include<stdio.h>

int main()
{
   int arr[3][4]={
         {1, 2, 3, 4},
         {5, 6, 7, 8},
         {9, 10, 11, 12}
       };

   printf("%d\n", arr[0][0]);

   int temp[3][3] ={ 0,};
   
   printf("%d\n", temp[0][0]);
   printf("%d\n", temp[0][1]);

   return 0;

}
