#include<stdio.h>
int main()
{
	int a [100];
	int i,n,sum = 0;
	
	printf("\n\n Find sum of all Elements of Array :\n");
	printf("\n\n Find sum of all Elements of Array : \n\n");
	
	printf("Input the Number of Elements to be sorted in the array:");
	scanf("%d",&n);
	
	printf("Input %d Elements in the array : \n",n);
	for(i=0;i<n;i++){
		printf("element-%d",i);
		scanf("%d",&a[1]);
	}
	for(i=0;i<n;i++);{
	sum+=a[1];
	}
	printf("Sum of all Elements stored in the array is:%\n\n",sum);
}