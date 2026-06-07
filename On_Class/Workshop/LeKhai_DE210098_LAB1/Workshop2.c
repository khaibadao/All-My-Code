#include <stdio.h>
#include <math.h>
#include <stdlib.h>
 
/*
 	
 	Information
 	Name: Lê Khải
 	ID: DE210098
 	Project: Workshop2
 	
*/
 
double summary_salary = 0.0;
 
int ten = 0, fifteen = 0, twentyfive = 0;
 
 
double allowance(double money){
	if(money < 6000000) return money * 0.25L;
	if(6000000 <= money && money <= 15000000) return money * 0.15L;
	return money * 0.1L;
}
 
double taxx(double money){
	double over_taxx = 0.0;
	if(money > 8000000) over_taxx = (money - 8000000.0) * 0.1L;
	return over_taxx;
}
 
int check_allowance(double money){
	if(money < 6000000) return 1;
	if(6000000 <= money && money <= 15000000) return 2;
	return 3;	
}
 
void Information (int i){
	double total_salary = 0;
	double salary;
	printf("Proceessing employee: %d\n", i);
 
	do
	{
		printf("Enter the basic salary (>= 0): ");
		scanf("%lf", &salary);
		if(salary < 0) printf("Invalid salary. Please enter a non-negative value.\n");
	}while(salary < 0);
 
	total_salary = salary + allowance(salary);
 
	summary_salary += (total_salary - taxx(total_salary));
 
	(check_allowance(salary) == 1) ? ++twentyfive : (check_allowance(salary) == 2) ? ++fifteen : ++ten;
 
	printf("\n--> Basic Salary: %.2lf\n", salary);
	printf("--> Allowance: %.2lf\n", allowance(salary));
	printf("--> Tax deduction: %.2lf\n", taxx(total_salary));
	printf("--> Net Income: %.2lf\n\n", total_salary - taxx(total_salary));
 
}
 
void statistics(){
	printf("\n");
	printf("=== Salary Statistics ===\n\n");	
	printf("--> Total salary cost of the company: %.2lf\n", summary_salary);
	printf("--> Number of employees with allowance of 25%: %d\n", twentyfive);
	printf("--> Number of employees with allowance of 15%: %d\n", fifteen);
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
		if(number_employees <= 0) printf("Your number employees is invailed. Please try again!! \n");
	}while(number_employees <= 0);
 
	printf("\n");
 
	while(number_employees--){
		Information(number);
		++number;
	}
 
	statistics();
 
	getchar();
 
	return 0;
}