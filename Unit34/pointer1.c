#include<stdio.h>

int main()
{
  int n1 = 10;

  printf("%p\n", &n1);

  int *np;
  int n2 =10;
  
  np = &n2;
 
  printf("%p\n", np);
  printf("%p\n", &n2);

  return 0;
}
