#include<stdio.h>
struct HR
{
	int id;
	char name[25];
	double sallery;
	double comission;
};
void desplyHR(struct HR h); 
struct HR storedetailsofHR();
void main()
{
	struct HR h1,h2,h3;
	printf("enter id name sallery comission:");
	h1=storedetailsofHR();
	
	printf("enter id name sallery comission:");
	h2=storedetailsofHR();
	
	printf("enter id name sallery comission:");
	h3=storedetailsofHR();
	
	desplyHR(h1);
	desplyHR(h2);
	desplyHR(h3);
}
struct HR storedetailsofHR()
{
	struct HR temp;
	scanf("%d",&temp.id);
	scanf("%s",&temp.name);
	scanf("%lf",&temp.sallery);
	scanf("%lf",&temp.comission);
	return temp;
}
void desplyHR(struct HR h) 
{
	printf("id=%d name=%s sallery=%lf comission=%lf\n",h.id,h.name,h.sallery,h.comission);
}