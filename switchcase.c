#include<stdio.h>
int main()
{
	int m=0;
	printf("Enter your choice:n 1.Book a car:n 2.Book a van:n 3.Book a flight:n");
	
	//accepting users choice
	
	scanf("%d",&m);
	
	//passing choice in switch case
	
	switch(m)
	{
		case 1:
			printf("Car is booked");
			break;
		case 2:
			printf("Van is booked");
			break;
		case 3:
			printf("Flight is booked");
			break;
		default:
			printf("Invalid input");
			break;
	}
	return 0;
}
