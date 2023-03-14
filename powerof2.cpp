#include<stdio.h>

int main()
{
	int num;
	
	
	printf("Enter the number:");
	scanf("%d",&num);
	
	if((num !=0) && ((num &(num-1)) == 0))
	    printf("\n%d is power of 2", num);
	else 
	printf("\n%d is not power of 2\n",num);
	
	return 0;
}
