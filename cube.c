#include<stdio.h>

void cube()
{
	int ans,num;
	
	printf("Enter The Value = ");
	scanf("%d",&num);
	
	ans = num * num * num;
	
	printf("cube of %d is = %d",num,ans)	;
}

int main()
{	
	cube();
}