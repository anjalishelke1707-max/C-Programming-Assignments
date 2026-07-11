
void main()
{
	int no=0;
	int i=2,flag=0;
	
		if(no <= 1)
    {
        printf("Not Prime");
    }
    else
    {
        while(i <= no / 2)
        {
		if(no%i==0)
		{
			flag=1;
			break;
			
		}
		i++;
	    }
	       if(flag==0)
		   printf("prime");
		   else
		   printf("not prime");
    }
}