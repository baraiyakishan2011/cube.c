#include<stdio.h>

void division()
{
	int num;
	
	printf("Enter the number = ");
	scanf("%d",&num);
	
	if(num%3==0 && num%5==0)
	{
		printf("%d is divisible with 3 & 5",num);
	}
	else
	{
		printf("%d is not divisible with 3 & 5",num);
	}
}

int main()
{
	division();
}