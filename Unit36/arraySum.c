#include<stdio.h>

int main()
{
  int temp[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int sum =0;

  for(int i =0; i < sizeof(temp)/ sizeof(int);i++)
  {
    sum += temp[i];
    printf("%d\n", sum);
  }

}
