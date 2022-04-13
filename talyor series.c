#include<stdio.h>
#include<math.h>
#define PI 3.142857
int main()
{
float x,degree,nume,deno,sum,term;
int i;
/* Accept value of x in degree */
printf("Enter degree:");
scanf("%f",&degree);
// Convert degree into radians
x=degree*(PI/180.0);
// Initialize values of sum, nume, deno and i variables
sum=0;
nume=x;
deno=1.0;
i=1;
do
{
// compute term
term=nume/deno;
// Add term value to sum
sum=sum+term;
i=i+2;
// compute next numerator and denominator values
nume= -nume*x*x;
deno=deno*i*(i-1);
// printf("Term=%f\n",term);
} while (fabs(term) >= 0.00001);
printf("Computed value of Sin(%f)=%f\n",degree,sum);
printf("Value from library function is sin(%f) = %f\n",degree,sin(x));
return 0;
}