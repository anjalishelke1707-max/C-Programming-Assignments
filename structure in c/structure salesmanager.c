#include<stdio.h>
struct SalesManager
{
	int id;
	char name[25];
	double sallery;
	double incentive;
	int target;
};
void desplySalesManager(struct SalesManager s);
struct SalesManager storedetailsofSalesManager();
void main()
{
	struct SalesManager s1,s2,s3;
	printf("enter id name sallery incentive target:");
	s1=storedetailsofSalesManager();
	
	printf("enter id name sallery incentive target:");
	s2=storedetailsofSalesManager();
	
	printf("enter id name sallery incentive target:");
	s3=storedetailsofSalesManager();
	
	desplySalesManager(s1);
	desplySalesManager(s2);
	desplySalesManager(s3);
}
struct SalesManager storedetailsofSalesManager()
{
	struct SalesManager temp;
	scanf("%d",&temp.id);
	scanf("%s",temp.name);
	scanf("%lf",&temp.sallery);
	scanf("%lf",&temp.incentive);
	scanf("%d",&temp.target);
	return temp;
}
void desplySalesManager(struct SalesManager s) 
{
	printf("id=%d name=%s sallery=%lf incentive=%lf target=%d\n",s.id,s.name,s.sallery,s.incentive,s.target);
}

	