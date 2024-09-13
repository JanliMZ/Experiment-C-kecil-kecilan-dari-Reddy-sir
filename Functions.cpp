#include<stdio.h>
int sum ( int , int ) ; // Function Prototype
int main () // Main Function from where Execution Begins
{
int total;
total=sum(2,3); // Function Call
printf("total is %d \n", total);
}
int sum ( int a , int b) // Function Definition
{
return (a + b) ;
}
