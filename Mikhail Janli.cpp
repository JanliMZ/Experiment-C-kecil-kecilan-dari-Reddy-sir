#include<stdio.h>
#include<conio.h>
int main()
{
int x1,x2,v1,v2;
printf("Enter the values of x1 & x2:");
scanf("%d %d", &x1,&x2);
printf("Enter the values of v1 & v2:");
scanf("%d %d", &v1,&v2);
if(v1<v2)
{
printf("No");
}
if((x2-x1)%(v1-v2)==0)
{
printf("Yes");
}
else
{
printf("No");
}
getch();
}

