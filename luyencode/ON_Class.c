#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>



void nhap(float *a){
	for(int i = 0 ; i < 5 ; ++i){
		scanf("%f", &a[i]);
	}
}

float ma(float a[], int n){	
	float tmp = INT_MIN;
	for(int i = 0 ; i < n ; ++i){
		if(tmp < a[i]) tmp = a[i];
	}
	return tmp;
}

float average(float a[], int n){
	float avr = 0;
	for(int i = 0 ; i < n ; ++i){
		avr += a[i];
	}
	return avr/n;
}

int main()
{
	float a[5];
	nhap(a);
	printf("Diem so lon nhat la: %f\n", ma(a, 5));
	printf("Diem trung binh cua ca lop la: %.2f", average(a, 5));
	return 0;
}  

                  