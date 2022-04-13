#include <stdio.h>
int main()
{
 int a[20];
 int n,i,j,temp,key;
 int first,mid,last;
 printf("Enter the size of the array :");
 scanf("%d",&n);
 printf("Enter %d elements :",n)
  for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
  }
 printf("The elements of the array before sorting is ----\n");
 for(i=0;i<n;i++)
 {
  printf("%d\t",a[i]);
 }
 for(i=0;i<n-1;i++)
 {
  for(j=0;j<n-1-i;j++)
  {
   if(a[j]>a[j+1])
   {
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
   }
  }
 }
 printf("\n\nThe sorted array is ---\n");
 for(i=0;i<n;i++)
 {
  printf("%d\t",a[i]);
 }
 printf("\n\nEnter the element to be searched :");
 scanf("%d",&key);
 first=0;
 last=n-1;
 while(first <= last)
 {
  mid=(first+last)/2;
  if(key==a[mid])
  {
   printf("\nThe element %d is found at location %d\n",key,mid+1);
   return (0);
  }
  else if (key < a[mid])
  {
   last = mid-1;
  }
  else
  {
   first = mid+1;
  }
 }
 printf("\nThe element %d is not found in the array\n",key);
 return (1);
}
