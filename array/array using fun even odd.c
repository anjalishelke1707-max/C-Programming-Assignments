void printEven(int arr[10]);
void printOdd(int arr[10]);

void main() 
{

	int arr[10];
	
	printf("enter an eliment:\n");
	for(int i=0; i<10; i++)
	 {
		scanf("%d",&arr[i]);
	}
	for(int i=0; i<10; i++)
	 {
		printf("%d ",arr[i]);
	}
	printEven(arr);
	printOdd(arr);
}




	void printEven(int arr[10])
	 {
		printf("even numbers:");
		for(int i=0; i<10; i++)
		 {
			if( arr[i]%2==0)
				printf(" %d ",arr[i]);
		}
	}



	void printOdd(int arr[10]) 
	{
		printf("odd numbers:");
		for(int i=0; i<10; i++) 
		{
			if(arr[i]%2!=0)
				printf("%d ",arr[i]);
		}
	}
