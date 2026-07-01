#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 100
 
/*
 
Xây dựng một mô hình meunu với các chức năng sau
 
1. Input: đầu vào
Trong đầu vào sẽ nhập số lượng kí tự của mảng (tối đa 100)
2. Display Array: Hiển thị mảng
3. Search for a number
4. Caculate statistics (Sum, Average, Max, Min)
5. Exit
 
*/
 
// Variable	    
 
int a[MAX];
int n;
int gt;
int choice;
int check_input_data = 0;
       
	     
// ------------------------------------------- //


int finding(int a[], int n, int gt){
	for(int i = 0 ; i < n ; ++i){
		if(a[i] == gt) return i;
	}
	return -1;
}
 
 
void menu()
{
	printf("\n ---- Menu ----\n");
	printf("1. Input Data\n");
	printf("2. Display Array\n");
	printf("3. Search for a number\n");
	printf("4. Calculate Statistics (Sum, Average, Maximum, Minimum)\n");
	printf("5. Exit!\n");
}
 
// 1.
 
void input_data(int a[], int *n){
	do
	{
		printf("Enter the number of elements (1 - 100): ");
		scanf("%d", n);
		if(*n < 1 || *n > 100) printf("Invalid size!. Please enter a number between 1 and 100.\n");
	}
	while(*n < 1 || *n > 100);
 
	printf("Enter %d numbers: \n", *n);
	for(int i = 0 ; i < *n ; ++i){
		printf("Number %d: ", i + 1);
		scanf("%d", (a + i));
	}
}
 
// 2.
 
void display_array(int a[], int n){
	printf("\nArray elements: ");
	for(int i = 0 ; i < n ; ++i){
		printf("%d ", *(a + i));
	}
	printf("\n");
}
 
// 3.
 
void search_for_a_number(int a[], int n, int *gt){
 
	printf("Enter the number you want to search for: ");
	scanf("%d", gt);
 
	int i = finding(a, n, *gt);
 
	if(i != -1){
		printf("\n--> The number %d is found at index %d.\n\n", *gt, i);
	}else printf("\n--> The number %d is not found in the array!\n", *gt);
}
 
// 4. 
 
void calculate_statistics(int a[], int n){
	int Sum = 0;
	float Avarage;
	int ma = a[0], mi = a[0];
	for(int i = 0 ; i < n ; ++i){
		Sum += a[i];
		if(a[i] > ma) ma = a[i];
		if(a[i] < mi) mi = a[i];
	}
 
	Avarage = (double)Sum/n;
 
	printf("--> Sum: %d\n", Sum);
	printf("--> Average: %.2f\n", Avarage);
	printf("--> Maximum: %d\n", ma);
	printf("--> Minimum: %d\n", mi);
}
 

int main()
{
	while(1){
		menu();
		do
		{
			printf("\n--> Enter your choice: ");
			scanf("%d", &choice);
			if(choice < 1 || choice > 5) printf("Invalid value. Please try again");
		}while(choice < 1 || choice > 5);
 
		if(choice == 5){
			printf("Exiting the program!");
			break;
		}
		
		if(choice == 1) ++check_input_data;
		
		if(!check_input_data) printf("\nYou did not type the input data. Please try again!\n");
		else
		{
			if(choice == 1) input_data(a, &n);
			if(choice == 2) display_array(a, n);
			if(choice == 3) search_for_a_number(a, n, &gt);
			if(choice == 4) calculate_statistics(a, n);
		}
	}
	return 0;
}
 