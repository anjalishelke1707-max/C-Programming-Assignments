#include<stdio.h>
struct Admin
{
	int id;
	char name[25];
	double sallery;
	double allowance;
};
void desplyadmin(struct Admin a);
struct Admin storedetailsofadmine();
void main()
{
	struct Admin a1,a2,a3;
	printf("enter id name sallery allowance:");
	a1=storedetailsofadmine();
	
	printf("enter id name sallery allowance:");
	a2=storedetailsofadmine();
	
	printf("enter id name sallery allowance:");
	a3=storedetailsofadmine();
	
	desplyadmin(a1);
	desplyadmin(a2);
	desplyadmin(a3);
}
struct Admin storedetailsofadmine()
{
	struct Admin temp;
	scanf("%d",&temp.id);
	scanf("%s",&temp.name);
	scanf("%lf",&temp.sallery);
	scanf("%lf",&temp.allowance);
	return temp;
}
void desplyadmin(struct Admin a) 
{
	printf("id=%d name=%s sallery=%lf allowance=%lf\n",a.id,a.name,a.sallery,a.allowance);
}