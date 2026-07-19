#include <stdio.h>
#include <math.h>
#include <limits.h>
#define MAX_SIZE 1000

void doo(int a[], int n){
	int sum = 0;
	int ma = INT_MIN, mi = INT_MAX;
	for(int i = 0 ; i < n ; ++i){
		sum += a[i];
		if(a[i] > ma) ma = a[i];
		if(a[i] < mi) mi = a[i];
	}
	
	printf("Statistics\n");
	printf("Sum: %d\n", sum);
	printf("Average: %.2f\n", (double)sum/n);
	printf("Maximum: %d\n", ma);
	printf("Minimum: %d", mi);
}

int main()
{
	freopen("data_in.txt", "r", stdin);
	freopen("data_out.txt", "w", stdout);
	int a[MAX_SIZE];
    int n = 0;

    while (scanf("%d", &a[n]) == 1) {
        n++;
    }
    
    doo(a, n);
    
	return 0;
}