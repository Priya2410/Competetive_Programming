#include <stdio.h>

int main(void) {
  
  float Y;
  int X;
  scanf("%d %f",&X,&Y);
  
  if(X<=Y-0.50)
  {
    if(X%5==0)
      {
          Y=Y-X-0.50;
          printf("%0.2f",Y);
      }
      else
      {
          printf("%0.2f",Y);
      }
  }
  
  else
  {
      printf("%0.2f",Y);
  }
  
  
}

