#include<stdio.h>
struct Product
{
	int id;
	char name[25];
	double price;
};
void main()
{
	struct Product p1,p2;
	
	printf("enter id:");
	scanf("%d",&p1.id);
	
	printf("enter name:");
	fflush(stdin);
	gets(p1.name);
	
	printf("enter price:");
		scanf("%lf",&p1.price);
		
		printf("\nProduct 1 details");
		printf("\nid:%d",p1.id);
		printf("\nname:%s",p1.name);
		printf("\nprice:%lf",p1.price);
		
	printf("\nenter id:");
	scanf("%d",&p2.id);
	
	printf("enter name:");
	fflush(stdin);
	gets(p2.name);
	
	printf("enter price:");
		scanf("%lf",&p2.price);
		
		printf("\nProduct 2 details");
		printf("\nid:%d",p2.id);
		printf("\nname:%s",p2.name);
		printf("\nprice:%lf",p2.price);	
}