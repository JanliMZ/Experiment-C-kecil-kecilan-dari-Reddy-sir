#include<stdio.h>
float areacircle(float radius);
int main(){
	float radius;
	printf("Enter the Radius of Circle: ");
	scanf("%f",&radius);
	
	printf("The area of Circle is %f",areacircle(radius));
	return 0;
}
float areacircle(float radius){
	return(3,14*radius*radius);
}