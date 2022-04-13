#include<stdio.h>
int main()
{
  struct student
  {
    int stu_id;
    char name[20];
    float lang1_marks;
    float lang2_marks;
    float sc_marks;
    float mat_marks;
    float sst_marks;
    float comp_marks;
    float avg;
  }
  ;
  struct student s[20];
  int i,n;
  printf("Enter the number of records :");
  scanf("%d",&n); 
  printf("Enter %d student details...\n",n);
  for(i=0;i<n;i++)
  {
    printf("\n\nEnter student ID :");  
    scanf("%d",&s[i].stu_id);
    printf("Enter lang1 Marks:");  
    scanf("%f",&s[i].lang1_marks);
    printf("Enter lang2 Marks :");  
    scanf("%f",&s[i].lang2_marks);
    printf("Enter science Marks :");  
    printf("Enter student name :");  
    scanf("%s",s[i].name);
    scanf("%f",&s[i].sc_marks);
    printf("Enter Maths Marks :"); 
    scanf("%f",&s[i].mat_marks);
    printf("Enter SST Marks :");  
    scanf("%f",&s[i].sst_marks);
    printf("Enter Computer Marks :");  
    scanf("%f",&s[i].comp_marks);
  }
  for(i=0;i<n;i++)
  {
    s[i].avg=(s[i].lang1_marks + s[i].lang2_marks + s[i].sc_marks + s[i].mat_marks +
              s[i].sst_marks + s[i].comp_marks)/6.0;
  }
  printf("Students scoring above the average marks....\n");
  printf("\n\nID\tName\tAverage\n\n");
  for(i=0;i<n;i++)
  {
    if(s[i].avg>=35.0)
      printf("%d\t%s\t%f\n",s[i].stu_id,s[i].name,s[i].avg);
  }
  printf("\n\nStudents scoring below the average marks....\n");
  printf("\n\nID\tName\tAverage\n\n");
  for(i=0;i<n;i++)
  {
    if(s[i].avg<35.0)
      printf("%d\t%s\t%f\n",s[i].stu_id,s[i].name,s[i].avg);
  }
  return 0;
}
