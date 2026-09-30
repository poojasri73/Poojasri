#include<stdio.h>
int main()
{
	int a,b,choice,res;
	printf("~~~~OPERATORS AND EXPRESSION~~~~\n");
	printf("Enter you first number:");
	scanf("%d",&a);
	printf("Enter you second number:");
	scanf("%d",&b);
	printf("\n-----MENu-----\n");
	printf("1.ADDITION\n");
	printf("2.SUBTRACTION\n");
	printf("3.MULTIPLICATION\n");
	printf("4.DIVISION\n");
	printf("5.MODULUS\n");
	printf("\nENTER YOUR CHOICE:");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:
       	res=a+b;
		printf("Result=%d",res);
		break;
	case 2:
       	res=a-b;
		printf("Result=%d",res);
		break;	
	case 3:
       	res=a*b;
		printf("Result=%d",res);
		break;
	case 4:
		if(b!=0)
		{
       	res=a/b;
		printf("Result=%d",res);
		}
		else
		{
		printf("Division by zero is not possible");
		}
		break;
	case 5:
		if(b!=0)
		{
       	res=a%b;
		printf("Result=%d",res);
		}
		else
		{
		printf("Modulus by zero is not possible");
		}
		break;
	default:
		printf("Invalid choice:");	
		}
	return 0;
}