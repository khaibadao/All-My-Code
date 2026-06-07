#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>


void bai7(int n){
	long tong = 0;
	while(n){
		int du = n%10; 
		tong += du;
		n /= 10;
	}
	printf("%d", tong);
}

void bai8(int n){
	char t = 'a';
	for(int i = 1 ; i <= 26 ; ++i){
		printf("%c ", t);
		++t;
	}
}
 
void bai9(int n){
	for(int i = 2 ; i <= 100 ; i += 2){
		printf("%d ", i);
	}
}

void bai10(int n){
	for(int i = 1 ; i <= 100 ; i += 2){
		printf("%d ", i);
	}
}

void bai11a(int n){
	for(int i = 1 ; i <= n ; ++i){
		for(int j = 1 ; j <= n ; ++j){
			if(i == 1 || j == 1 || i == n || j == n) printf("* ");
			else printf("  ");
		}
		printf("\n");
	}
}

int CheckPrime(int n){
	if(n < 2) return 0;
	if(n < 4) return 1;
	if(n%2 == 0 || n%3 == 0) return 0;
	for(int i = 5 ; i * i <= n ; i += 6){
		if(n%i == 0 || n%(i + 2) == 0) return 0;
	}
	return 1;
}

void bai31(int n){
	(CheckPrime(n)) ? printf("Prime") : printf("No Prime");
}

void bai32(int n){
	for(int i = 2 ; i <= n ; ++i){
		if(CheckPrime(i)) printf("%d ", i);
	}
}

void bai33(int n){
	int sum = 0;
	for(int i = 2 ; i <= n ; ++i){
		if(CheckPrime(i)) sum += i;
	}
	printf("%d ", sum);
}



int main()
{
	int n; scanf("%d", &n);
	bai33(n);
	return 0;
}  

                  

















