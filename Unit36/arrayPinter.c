#include<stdio.h>

int main()
{
  int temp[10] = {1, 2, 3, 5, 6, 7, 8, 9, 10};
  int *tempPointer = temp;
  printf("%d\n", *tempPointer);
  
  printf("%d\n", *temp);

  printf("%d\n", tempPointer[5]);
  printf("%lu\n", sizeof(temp));
  printf("%lu\n", sizeof(tempPointer));

}
