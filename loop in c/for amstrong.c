void main()
{
    int num = 153;
    int rem, sum = 0;

    for (int temp=num;temp > 0; temp = temp / 10)
    {
        rem = temp % 10;
        sum = sum + (rem * rem * rem);
    }

    if (sum == num)
        printf("%d is an Armstrong Number", num);
    else
        printf("%d is not an Armstrong Number", num);
}