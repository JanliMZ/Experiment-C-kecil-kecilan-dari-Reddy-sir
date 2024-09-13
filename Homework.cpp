#include <stdio.h>
void inf(char name[],char city[],char month[],int date);
int main(){
	char name[20],city [20],month[20];
	int date;
	printf("Enter your name:");
	scanf:("%s",name);
	
	printf("Enter your date of birth: ");
	scanf("%d",&date);
	
	printf("Enter your birth month: ");
	scanf("%s",month);
	
	printf("Enter your city name: ");
	scanf("%s",month);
	
inf(name,city,month,date);
	return 0;
}
void inf(char name[],char month[],char city[],int date){
	printf("My Name is %s\n",name);
	printf("I reside in %s\n",city);
	printf("I was born on %d %s ",date,month);
}