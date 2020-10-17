#include<stdio.h>
#include<stdlib.h>

int getMax(const int temp[], int number)
{
  int i;
  int max = temp[0];
  for(i =1; i < number ; i++){
   if(temp[i] > max) max =temp[i];
  }
    return max;
}

  int main(void){
  
  int i;
  int *height;
  int number;
  printf("Number of people");
  scanf("%d",&number);
  height = calloc(number , sizeof(int));
  printf("%d Enter the height of people\n", number);
  
  for(i =0; i < number ;i++){
   printf("Height[%d] :",i);
   scanf("%d", &height[i]);
  }
  printf("Max value is %d\n", getMax(height, number));
  free(height);

  return 0;

}
