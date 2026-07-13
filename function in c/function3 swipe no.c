
void main()
{
	int a=10,b=20;
	printf("before swap %d %d \n",a,b);
	
	swap(&a,&b);
	printf("after swap %d %d" ,a,b);
}
void swap(int* a,int* b)
{
int temp=*a;
*a=*b;
*b=temp;
}