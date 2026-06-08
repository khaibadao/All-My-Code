#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int B3_min(int a, int b){
	if(a < b) return a;
	return b;
}

int B3_max(int a, int b){
	if(a > b) return a;
	return b;
}

int chan_le(int a){
	if(a&1) return 1;
	return 0;
}

int ngto(int n){
	for(int i = 2 ; i <= sqrt(n) ; ++i){
		if(n%i == 0) return 0;
	}
	return 1;
}

int per(int n){
	int sum = 0;
	for(int i = 1 ; i <= sqrt(n) ; ++i){
		if(n%i == 0){
			if(i != n/i){
				sum += i;
				sum += n/i;
			}
			else sum += i;
		}
	}
	return sum - n == n;
}

long long gt(int n){
	long long tmp = 1;
	for(int i = 1 ; i <= n ; ++i){
		tmp *= i;
	}
	return tmp;
}

long long checkstrn(int i){
	int i_tmp = i;
	long long sum = 0;
	while(i > 0){
		int kt = i%10;
		sum += gt(kt);
		i /= 10;
	}
	return sum == i_tmp;
}

int maa(int a, int b){
	return a > b;
}

int mii(int a, int b){
	return a < b;
}

int main()
{
	//Bai3
//	int a, b; scanf("%d%d", &a, &b);
//	printf("\n --> So lon nhat trong hai so la: %d\n", B3_max(a, b));
//	printf(" --> So nho nhat trong hai so la: %d\n", B3_min(a, b));

//	Bai4
//	int a; scanf("%d", &a);
//	(chan_le(a)) ? printf("La so le") : printf("La so chan");
	
//	Bai5
//	int a; scanf("%d", &a);
//	(ngto(a)) ? printf("%d la so nguyen to!\n", a) : printf("%d khong phai la so nguyen to!\n", a);
//	(per(a)) ? printf("%d la so hoan hao!\n", a) : printf("%d khong phai la so hoan hao!", a);
	
//	Bai6
//	int a, b; scanf("%d%d", &a, &b);
//	printf("Cac so ngto tu a -> b la: ");
//	for(int i = a ; i <= b ; ++i){
//		if(ngto(i)) printf("%d ", i);
//	}
	
		
//	Bai7
//	int a, b; scanf("%d%d", &a, &b);
//	printf("Cac so strong la: ");
//	for(int i = a ; i <= b ; ++i){
//		if(checkstrn(i)) printf("%d ", i);
//	}

	int a, b, c; scanf("%d%d%d", &a, &b, &c);
	(maa(a, b) && maa(a, c)) ? printf("A lon nhat") : (maa(b, a) && maa(b, c)) ? printf("B lon nhat") : printf("C lon nhat");
	printf("\n"); 
	(mii(a, b) && mii(a, c)) ? printf("A nho nhat") : (mii(b, a) && mii(b, c)) ? printf("B nho nhat") : printf("C nho nhat");
	return 0;
}