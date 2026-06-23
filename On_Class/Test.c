#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int check_chr(char c){
	if('0' <= c && c <= '9') return 1; 
	if('a' <= c && c <= 'z') return 2;
	if('A' <= c && c <= 'Z') return 3;
	return 0;
}

char H_to_T(char c){
	return c + 32;
}

char T_to_H(char c){
	return c - 32;
}

int main()
{
	char n; scanf("%c", &n);
	int ans = check_chr(n);
	(ans == 1) ? printf("La so") : (ans == 2) ? printf("La chu thuong") : (ans == 3) ? printf("La chu hoa") : printf("Ki tu khac !");
	
	printf("\n");
	if(ans == 3) printf("Ki tu thuong la: %c", H_to_T(n));	
	if(ans == 2) printf("Ki tu thuong la: %c", T_to_H(n));
	return 0;
}