#include<stdio.h>
int sum ( int , int ,int ) ; // Function Prototype
int main () // Main Function from where Execution Begins
{
int total;
total=sum(10,20,30); // Function Call
printf("total is %d \n", total);
}
int sum ( int a , int b, int c) // Function Definition
{
return (a + b + c) ;
}