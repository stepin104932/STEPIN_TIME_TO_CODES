#include<stdio.h>

int sum(int a, int b)
{
  return (a + b);
}

int subtract(int a, int b)
{
  return (a - b);
}

int mul(int a, int b)
{
  return (a * b);
}

int div(int a, int b)
{
  if(b==0)
      return -1;
  else
      return (a/b);
}
