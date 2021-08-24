#include<stdio.h>

int main()
{
  int n[10] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 111};
  printf("%d\n", n[1]);
  printf("%d\n", n[8]);
  printf("%d\n", n[9]);
  
  int temp[10] = {0,};
  printf("%d\n", temp[0]);
  printf("%d\n", temp[5]);
  printf("%d\n", temp[9]);
  return 0;
}
