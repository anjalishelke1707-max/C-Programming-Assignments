#include<stdio.h>
struct student
{
	int rollno;
	char name[25];
	int marks;
};
void desplystudent(struct student s);
struct student storedetailsofstudent();
void main()
{
	struct student s1,s2,s3;
	printf("enter rollno name marks:");
	s1=storedetailsofstudent();
	
	printf("enter rollno name marks:");
	s2=storedetailsofstudent();
	
	printf("enter rollno name marks:");
	s3=storedetailsofstudent();
	
	desplystudent(s1);
	desplystudent(s2);
	desplystudent(s3);
}
struct student storedetailsofstudent()
{
	struct student temp;
	scanf("%d",&temp.rollno);
	scanf("%s",&temp.name);
	scanf("%d",&temp.marks);
	return temp;
}
void desplystudent(struct student s) 
{
	printf("rollno=%d name=%s marks=%d\n",s.rollno,s.name,s.marks);
}

	