#include<conio.h>
#include<stdio.h>
int main()
{
struct student
{
char  name[10]; // structure elements
char  cast;
char  city;
int   roll;
int   year;
};
struct student s1,s2,s3;         // structure variable

printf("\t \t enter 1st student information");
printf("\n enter name=\t");
gets(s1.name);
printf("\n enter student cast=\t");
scanf("%s",s1.cast);
printf("\n enter student city=\t");
scanf("%s",&s1.city);
printf("\n enter student rool no=\t");
scanf("%d",s1.roll);
printf("\n enter admission year=\t");
scanf("%d",&s1.year);
printf("\t \t enter student 2nd information");
printf("\n enter name=\t");
scanf("%s",&s2.name);
printf("\n enter student cast=\t");
scanf("%s",s2.cast);
printf("\n enter student city=\t");
scanf("%s",&s2.city);
printf("\n enter student rool no=\t");
scanf("%d",s2.roll);
printf("\n enter admission year=\t");
scanf("%d",&s2.year);

}



