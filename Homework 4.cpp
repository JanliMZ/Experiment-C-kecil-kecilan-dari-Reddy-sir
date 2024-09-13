#include<stdio.h>
int arearec(int a,int b);
int main(){
	int a,b;
	printf("Enter Length & Breadth:\n");
	scanf("%d",&a);
	scanf("%d",&b);
	
	printf("Area of Rectangle is %d", arearec(a,b));
	return 0;
}
int arearec(int a,int b){
	return(a*b);
}