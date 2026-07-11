void main()
{
    int no = 28;
    int i = 1, sum = 0;

    while(i < no)
    {
        if(no % i == 0)
        {
            sum = sum + i;
        }
        i++;
    }

    if(sum == no)
        printf("Perfect Number");
    else
        printf("Not Perfect Number");
}