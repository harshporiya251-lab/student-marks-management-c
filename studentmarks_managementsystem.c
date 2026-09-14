#include<stdio.h>
#include<conio.h>
void main()
{
    char student_name[10];
    int roll_no;
    int math,science,english,hindi,social_science,Total;
    printf(" Student name:");
    scanf("%s",student_name);
    printf("Roll.no:");
    scanf("%d",&roll_no);
   printf(" Enter the marks of math:");
    scanf("%d",&math);
   printf(" Enter the marks of science:");
    scanf("%d",&science);
   printf(" Enter the marks of english:");
    scanf("%d",&english);
   printf(" Enter the marks of hindi:");
    scanf("%d",&hindi);
   printf(" Enter the marks of social science:");
   scanf("%d",&social_science);
   Total=math+science+english+hindi+social_science;
   printf("\n Total=%d",Total);
  float percentage=Total / 5.0;
  printf("\n Percentage=%f",percentage);
  if (percentage>=90)
  {
    printf("\n Grade=A+");
  }
  else if (percentage>=80)
  {
    printf("\n Grade=A");
  }
  else if (percentage>=70)
  {
    printf("\n Grade=B");    
}
  else if (percentage>=60)
  {
    printf("\n Grade=C");
  }
  else if (percentage>=50)
  {
    printf("\n Grade=D");
  }
  else
  {
    printf("\n Grade=F");
  }
  if (percentage>=40)
  {
    printf("\n Pass");

  }
  else
  {
    printf("\n Fail");
  }
  getch();
} 
  


