#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/*

	Information: 
	Name: ManhDung
	ID: DE210137
	Project: Workshop2.

*/

double summary_salary = 0.0;

int ten = 0, fithteen = 0, twentyfive = 0;


double allowance(double money){
	if(money < 6000000) return money * 0.25L;
	if(6000000 <= money && money <= 15000000) return money * 0.15L;
	return money * 0.1L;
}

double taxx(double money){
	if(money > 8000000) return money * 0.1L;
	return 0.0;
}

int check_allowance(double money){
	if(money < 6000000) return 1;
	if(6000000 <= money && money <= 15000000) return 2;
	return 3;	
}

void Information (int i){
	double total_salary = 0;
	double salary;
	printf("\nProceessing employee: %d\n", i);
	
	do
	{
		printf("Enter the basic salary (>= 0): ");
		scanf("%Lf", &salary);
		if(salary < 0) printf("Invalid salary. Please enter a non-negative value.\n");
	}while(salary < 0);
	
	total_salary = salary + allowance(salary);
	
	summary_salary += (total_salary - taxx(total_salary));
	
	(check_allowance(salary) == 1) ? ++twentyfive : (check_allowance(salary) == 2) ? ++fithteen : ++ten;
	
	printf("\n--> Basic Salary: %.2Lf\n", salary);
	printf("--> Allowance: %.2Lf\n", allowance(salary));
	printf("--> Tax deduction: %.2Lf\n", taxx(total_salary));
	printf("--> Net Income: %.2Lf\n", total_salary - taxx(total_salary));
	
}

void statistics(){
	printf("\n");
	printf("=== Salary Statistics ===\n");	
	printf("--> Total salary cost of the company: %.2lf\n", summary_salary);
	printf("--> Number of employees with allowance of 25%: %d\n", twentyfive);
	printf("--> Number of employees with allowance of 15%: %d\n", fithteen);
	printf("--> Number of employees with allowance of 10%: %d\n", ten);
}


int main()
{
	int number_employees;
	int number = 1;
	do
	{
		printf("Enter the number of employees: ");
		scanf("%d", &number_employees);
		if(number_employees < 0) printf("Your number employees is invailed. Please try again!! \n");
	}while(number_employees < 0);
	
	
	while(number_employees--){
		Information(number);
		++number;
	}
	
	statistics();
	
	getchar();
	
	return 0;
}