#include <stdio.h>
int fibo(int val)
{
	if (val==0)
	return 0;
	else if (val==1)
	return 1;
	else
	return (fibo(val-1)+fibo(val-2));
}
int main()
{
	int i,n;
	printf("Enter the nth term\n");
	scanf("%d",&n);
	printf("Fibonacci series of first %d terms is :-\n",n);
	for(i=0;i<n;i++)
{
	printf("%d ",fibo(i));
	}
}