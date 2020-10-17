#include <stdio.h>

#define N 5

int main(void)
{
  int i;
  int temp[N];
  for(i =0; i <N; i++){
    printf("temp[%d] : ",i);
    scanf("%d",&temp[i]);
  }
  puts("The each values");
  for(i =0; i < N ; i++){
    printf("temp[%d] = %d\n", i, temp[i]);
  }
  return 0;
}
