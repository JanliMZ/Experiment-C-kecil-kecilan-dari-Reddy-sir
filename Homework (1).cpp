#include<stdio.h>
int fact(int n)
{
	if(n==0)	
	return 1;
	else
	return (n*fact(n-1));
}
int main()
{
int num;
 printf("Enter the nth term\n");
 scanf("%d",&num);
 printf("Factorial(%d) = %d\n",num,fact(num));
}