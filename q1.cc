#include <stdio.h>
#include <math.h>

int main(void)
{
  int i;//for loop
  int n;//for sqrt num
  for (i = 2; i < 21; i++)
  {
   n =(int) sqrt((float)i);
   if (i == n*n){
    printf("%d ", i*2);
   }
   else{
   printf("%d ", i);
   }
  }
printf("\n");
return 0;
}
