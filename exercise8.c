#include<stdio.h>
#include<stdlib.h>
/*call by value*/
int addByValue(int a,int b)
{
	int res;
	res=a+b;
	return res;
}
/* call by reference*/
void swapByReference(int*a,int*b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;	
}
int main()
{
	int a,b,res;
	int*ptr;
	int*arr;
	int n,i,sum;
	printf("Enter the first number :");
	scanf("%d",&a);
	printf("Enter the second number :");
	scanf("%d",&b);
	/*pointer demonstration*/
	ptr=&a;
	printf("\n pointer demonstration :");
	printf("\n value of a=%d",*ptr);
	printf("\n address of a=%p",(void*)ptr);
	/*call by value*/
	res=addByValue(a,b);
	printf("\n\n call by value:");
	printf("\n sum=%d",res);
	/*call by reference*/
	swapByReference(&a,&b);
	printf("\n\n call by reference:");
	printf("\n after swapping,first number=%d",a);
	printf("\n after swapping,second number=%d",b);
	/*dynamic memory allocation*/
	printf("\n\n dynamic memory allocation");
	printf("\n Enter the number of elements :");
	scanf("%d",&n);
	arr=(int*)malloc(n*sizeof(int));
	if(arr==NULL){
		printf("Memory allocation failed");
		return 0;
	}
	printf("Enter %d elements :\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	printf("sum of dynamically allocated array=%d",sum);
	free(arr);
	return 0;
}