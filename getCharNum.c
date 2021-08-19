#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
  char c1;

  printf(" Enter the charecters: ");
  scanf("%c", &c1);

  printf("%c\n", c1);
  
  char cc = getchar();
  printf("%c", cc);

  return 0;

}
