#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#define MAXN 100


/*
	Name: Lê Khải
	ID: DE210098
	Project: Workshop4
*/


typedef struct
{
	int sale[MAXN];
	int day[MAXN];
} mng;

int n;
int choice;
int check_input_data;
mng data;

void sorttIn(mng *data, int n){
	for(int i = 0 ; i < n - 1; ++i){
		int cs = i;
		for(int j = i + 1 ; j < n ; ++j){
			if(data->sale[cs] > data->sale[j]) cs = j;
		}
		if(cs > i){
			int gia_tri = data->sale[i];
			data->sale[i] = data->sale[cs];
			data->sale[cs] = gia_tri;
			
			int dayy = data->day[i];
			data->day[i] = data->day[cs];
			data->day[cs] = dayy;
		}
	}
}

void sorttDe(mng *data, int n){
	for(int i = 0 ; i < n - 1; ++i){
		int cs = i;
		for(int j = i + 1 ; j < n ; ++j){
			if(data->sale[cs] < data->sale[j]) cs = j;
		}
		if(cs > i){
			int gia_tri = data->sale[i];
			data->sale[i] = data->sale[cs];
			data->sale[cs] = gia_tri;
			
			int dayy = data->day[i];
			data->day[i] = data->day[cs];
			data->day[cs] = dayy;
		}
	}
}

void menu()
{
	printf("\n=== Enhanced Sales Data Management Menu ===\n");
	printf("1. Input Sales Data\n");
	printf("2. Display Sales Data\n");
	printf("3. Sort Sale Data in Ascending Order\n");
	printf("4. Sort Sales Data in Descending Order\n");
	printf("5. Search for Sales Greater Than a Target\n");
	printf("6. Exit\n");
}

// 1. Input Sale
void InputSale(mng *data, int *n){
	do
	{
		printf("Enter the number of days (1 - 100): ");
		scanf("%d", n);
		if(*n < 1 || *n > 100) printf("Invalid number of days! Please try again.\n");
	}while(*n < 1 || *n > 100);
	printf("\n--> Enter sales data for %d days\n", *n);
	for(int i = 0 ; i < *n ; ++i){
		printf("Day %d (Sales Value): ", i + 1);
		scanf("%d", &data->sale[i]);
		data->day[i] = i + 1;
	}
}

// 2. Display Sales Data
void DisplaySale(mng data, int n){
	printf("Sales data: \n");
	for(int i = 0 ; i < n ; ++i){
		printf("Day %d: %d\n", data.day[i], data.sale[i]);
	}
}

// 3. Sort Increase
void SortSaleDataIn(mng *data, int n){
	sorttIn(data, n);
	printf("Sales data: \n");
	for(int i = 0 ; i < n ; ++i){
		printf("Day %d: %d\n", data->day[i], data->sale[i]);
	}
	printf("\n");
}

// 4. Sort Decrease
void SortSaleDataDe(mng *data, int n){
	sorttDe(data, n);
	printf("Sales data: \n");
	for(int i = 0 ; i < n ; ++i){
		printf("Day %d: %d\n", data->day[i], data->sale[i]);
	}
	printf("\n");
}

// 5. Find the greatest target
void SearchForSale(mng data, int n){
	int target; 
	printf("--> Enter the taget slaes value: ");
	scanf("%d", &target);
	int check_target = 0;
	for(int i = 0 ; i < n ; ++i){
		if(data.sale[i] > target){
			++check_target;
			printf("Day %d: %d\n", data.day[i], data.sale[i]);
		}	
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
		printf("\n");
		if(choice == 6){
			printf("Exiting the program!\n");
			break;
		}
		
		if(choice == 1){
			++check_input_data;
		}
		
		if(!check_input_data) printf("\nYou did not type the input date. Please try again!\n\n");
		else
		{
			if(choice == 1) InputSale(&data, &n);
			if(choice == 2) DisplaySale(data, n);
			if(choice == 3) SortSaleDataIn(&data, n);
			if(choice == 4) SortSaleDataDe(&data, n);
			if(choice == 5) SearchForSale(data, n);
		}
	}
	
	
	return 0;
}

