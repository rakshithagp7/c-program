#include<stdio.h>
int main()
{
	int u,l,i,j,count;
	printf("enter the range to check for prime numbers: ");
	scanf("%d%d",&l,&u);
	printf("the prime numbers are:\n");
	for(i=l;i<=u;i++)
	{
		count = 0;
		for(j=1;j <=i;j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}
		if(count == 2)
		{
			printf("%d\t",i);
		}
	}
	return 0;
}
