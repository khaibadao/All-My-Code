#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#define MAXN 100


int n;

typedef struct
{
	int sale[MAXN];
	int day[MAXN];
} mng;


void menu()
{
	printf("=== Enhanced Sales Data Management Menu ===\n");
	printf("1. Input Sales Data\n");
	printf("2. Display Sales Data\n");
	printf("3. Sort Sale Data in Ascending Order\n");
	printf("4. Sort Sales Data in Descending Order\n");
	printf("5. Search for Sales Greater Than a Target\n");
	printf("6. Exit\n");
}

void InputSale(mng data, int *n){
	printf("Enter the number of days (1 - 100): ");
	scanf("%d", n);
	printf("Enter sales data for %d days", *n);
	for(int i = 0 ; i < n ; ++i){
		printf("Day %d (Sales Value): ", i + 1);
		scanf("%d", &data.sale[i]);
	}
}

void DisplaySale(mng data, int n){
	printf("Sales data: \n");
	for(int i = 0 ; i < n ; ++i){
		printf("Day %d: %d", i + 1, data.sale[i]);
	}
}


int main()
{
	while(1){
		menu();
		do
		{
			printf("\n--> Enter your choice: ");
			scanf("%d", &choice);
			if(choice < 1 || choice > 6) printf("Invalid value. Please try again");
		}while(choice < 1 || choice > 6);
 
		if(choice == 6){
			printf("Exiting the program!");
			break;
		}
		if(choice == 1){
			++check_input_data;
		}
		if(!check_input_data) printf("\nYou did not type the input date. Please try again!\n");
		else
		{
			if(choice == 1) 
			if(choice == 2) 
			if(choice == 3) 
			if(choice == 4) 
		}
	}
	return 0;
}


//5
//4 5
//4 -5
//6 9
//9 8
//3 6