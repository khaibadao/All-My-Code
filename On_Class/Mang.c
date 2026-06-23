#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


void linear_sort(int a[], int n){
	for(int i = 0 ; i < n - 1 ; ++i){
		int cs = i;
		for(int j = i + 1 ; j < n ; ++j){
			if(a[cs] > a[j]) cs = j;
		}
		if(cs > i){
			int tmp = a[i];
			a[i] = a[cs];
			a[cs] = tmp;
		}
	}
}

int found(int a[], int n, int gt){
	int l = 0, r = n - 1;
	while(l <= r){
		int mid = l + (r - l)/2;
		if(a[mid] == gt) return mid;
		if(a[mid] > gt) r = mid - 1;
		else l = mid + 1;
	}
	return -1;
}

void menu()
{
	printf("--- Menu ---\n");
	printf("1. Input Data\n");
	printf("2. Display Array\n");
	printf("3. Search for a number\n");
	printf("4. Calculate Statistics (Sum, Average, Max, Min)\n");
	printf("5. Exit!\n");
}

void display_array(int a[], int n){
	printf("\nArray elements: ");
	for(int i = 0 ; i < n ; ++i){
		printf("%d ", *(a + i));
	}
}

void Search_for_a_number(int a[], int n, int gt){
	if(found(a, n, gt) != -1){
		printf("The number %d is found at index %d.", gt, found(a, n, gt));
	}else printf("The number %d is not found in the array!", gt);
}



int main()
{
	menu();
	int n; scanf("%d", &n);
	int a[n];
	for(int i = 0 ; i < n ; ++i){
		scanf("%d", (a + i));
	}
//	linear_sort(a, n);
	int res; scanf("%d", &res);
	Search_for_a_number(a, n, res);
	
	return 0;
}