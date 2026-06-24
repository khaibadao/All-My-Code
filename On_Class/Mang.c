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
int Sum = 0;
int ma = INT_MIN, mi = INT_MAX;
int choice;
int check = 0;
int gt;
int check_sort = 0;
 
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
	printf("4. Calculate Statistics (Sum, Average, Max, Min)\n");
	printf("5. Exit!\n");
}
 
// 1.
 
void input_data(int a[], int *n){
	do
	{
		printf("Enter the number of elements (1 - 100): ");
		scanf("%d", n);
		if(*n < 1 || *n > 100) printf("Invailed size!. Please enter a number betwwen 1 and 100.\n");
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
	if(finding(a, n, *gt) != -1){
		printf("The number %d is found at index %d.\n", *gt, finding(a, n, *gt));
	}else printf("The number %d is not found in the array!", *gt);
}
 
// 4. 
 
void calculate_statistics(int a[], int n){
	for(int i = 0 ; i < n ; ++i){
		Sum += a[i];
		if(a[i] > ma) ma = a[i];
		if(a[i] < mi) mi = a[i];
	}
 
	printf("Sum: %d\n", Sum);
	printf("Average: .2%f\n", (double)Sum/n);
	printf("Maximum: %d\n", ma);
	printf("Miximum: %d\n", mi);
}
 
 
int main()
{
	while(1){
		menu();
		do
		{
			printf("Enter your choice: ");
			scanf("%d", &choice);
			if(choice < 1 || choice > 5) printf("Invailed value. Please try again");
		}while(choice < 1 || choice > 5);
 
		if(choice == 1) input_data(a, &n);
		if(choice == 2) display_array(a, n);
		if(choice == 3) search_for_a_number(a, n, &gt);
		if(choice == 4) calculate_statistics(a, n);
		if(choice == 5){
			printf("Exiting the program!");
			break;
		}
	}
 
	return 0;
}