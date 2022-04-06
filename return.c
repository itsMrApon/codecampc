#include <stdio.h>
#include <stdlib.h>

double cube(double num)
{
  double result = num * num * num;
  return result;
}

int main()
{
  printf("ans is %f", cube(7.0));
  return 0;
}