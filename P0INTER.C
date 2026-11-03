#include<stdio.h>

struct student{
char name[20];
int roll;
float marks;
};
int main()
{
struct student s[5] ={
{"anu",100,87.5},{"bala",101,90.5},{"ravi",102,78.5},{"kumar",103,85.5},{"arun",104,92.5}
};
int i;
for(i=0;i<5;i++)
{
printf("\nName:%s",s[i].name);
printf("\nRoll no:%d",s[i].roll);
printf("\nMarks:%.2f\n",s[i].marks);
}
return 0;
}