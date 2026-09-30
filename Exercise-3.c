#include<stdio.h>
int main()
{
	int a,b,choice,res;
	printf("~~~BRANCHING STATEMENT~~~\n");
	printf("Enter the first number: ");
	scanf("%d",&a);
	printf("Enter the second number:");
	scanf("%d",&b);
	printf("\n~~~~MENU~~~~\n");
	printf("1.Check positive,negative or zero\n");
	printf("2.Check even or odd \n");
	printf("3.Find largest of two number \n");
	printf("4.Check divisibility by 5 \n");
	printf("\nEnter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			if(a>0)
			printf("%d is positive",a);
			else if(a<0)
			printf("%d is negative",a);
			else
			printf("%d is zero",a);
			break;
		case 2:
			if(a%2==0)
			printf("%d is even",a);
			else 
			printf("%d is odd",a);
			break;
		case 3:
			if(a>b)
			{
				res=a;
				printf("%d is the largest numbe",res);
			}
			else if(b>a)
			{
				res=b;
				printf("%d is the largest numbe",res);
			}
			else
			{
				printf("Both number are equal");
			}
			break;
		case 4:
			if(a%5==0)
			printf("%d is divisible by 5",a);
			else 
			printf("%d is not divisible by 5",a);
			break;
			default:
				printf("Invalid chocie");			
	}
	return 0;
	
}