#include<stdio.h>

int main()
{
   int temp[3][4] = {
       {1, 2, 3, 4},
       {5, 6, 7, 8},
       {9, 10, 11, 12}
   };

   int col = sizeof(temp[0]) / sizeof(int);

   int row = sizeof(temp) /sizeof(temp[0]);

   for(int i = 0; i < row; i++)
   {
     for(int j =0; j < col; j++)
     {
        printf("%d ", temp[i][j]);
     }
     printf("\n");
   }

}
