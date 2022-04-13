#include <stdio.h>
int main() 
int gcd(int x, int y); 
{
  int num1, num2, hcf, lcm;
  printf("Enter two integer Values:\n");
  scanf("%d %d", &num1, &num2);
  hcf = gcd(num1, num2);
  printf("GCD: %d", hcf);
  printf("\nLCM: %d", (num1 * num2) / hcf);
  return 0;
}  
int gcd(int x, int y)
{
  if (y == 0) //recursion termination condition
  {
    return x;
  }
  else
  {
    return gcd(y, x % y); //calls itself
  }
}
