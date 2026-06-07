#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>


/*

Information: 	
	+ Name: Lê Khải
	+ ID: DE210098.
	+ Name_project: Workshop1.

*/


int main()
{
	
	// Variable 
	
	int number_student;
	long long summary_score = 0;
	int number_who_passed = 0, number_who_failed = 0;
	
	// Checking whether the number of students is available or not. 
	
	printf("Enter the number of students ( >= 1): ");
	
	do{
		scanf("%d", &number_student);
		
		// Check available
		
		if(number_student < 1){ 
			printf("The number is invalid. Please try again!\n");
			printf("Enter the number of students ( >= 1): ");
		}else
		{
			break;
		}
		
	}while(1);
	
	// Handle the score. 

	for(int number = 1; number <= number_student; ++number){
		printf("Enter the score for student %d (0 -> 10): ", number);
		int score; scanf("%d", &score);
		
		if(score < 0 || score > 10){
			while(score < 0|| 10 < score){
				printf("Your score is invalid. Please try again!!!\n");
				printf("Enter the score for student %d (0 -> 10): ", number);
				scanf("%d", &score);
			}
		}
		summary_score += score;
		(score >= 5) ? ++number_who_passed : ++number_who_failed;
	}	
	
	// Print the answers 
	
	printf("\nStatistics: \n\n"); 
	
	printf("--> Total score of the class: %lld\n", summary_score);
	printf("--> Average score of the class: %.2lf\n", ((double)summary_score/number_student)); 
	printf("--> Number of students who passed: %d (score >= 5)\n", number_who_passed);
	printf("--> Number of students who failed: %d (score < 5)\n\n", number_who_failed);
	
	system("pause");
	
	return 0;
}  

                  




	












