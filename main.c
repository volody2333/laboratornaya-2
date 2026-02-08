#include <stdio.h>

int main() {

double matrix[3][3];
double sum_main = 0.0, sum_side = 0.0;

printf("Enter 9 elements of 3x3 matrix:\n");
for(int i = 0; i < 3; i++) {
	for(int j = 0; j < 3; j++) {
		scanf("%lf", &matrix[i][j]);
	}
  }
  for(int i = 0; i < 3; i++) {
  	sum_main += matrix[i][i];
  	sum_side += matrix[i][2 - i];
  }
  
  int mat2[2][2], result[2][2];
  printf("Enter 4 numbers for 2x2 matrix:\n");
  for(int i = 0; i < 2; i++) {
  	for(int j = 0; j < 2; j++) {
  		scanf("%d", &mat2[i][j]);
	  }
   }
   
   for(int i = 0; i < 2; i++) {
   	for(int j = 0; j < 2; j++) {
   		result[i][j] = 0;
   		for(int k = 0; k < 2; k++) {
   			result[i][j] += mat2[i][k] * mat2[k][j];
		   }
	  }
   }
   printf("\n=== Results ===\n");
   printf("Main diagonal sum: %.2f\n", sum_main);
   printf("Side diagonal sum: %.2f\n", sum_side);
   
   printf("\nMatrix square (2x2):\n");
   for(int i = 0; i <  2; i++) {
   	for(int j = 0; j < 2; j++) {
   		printf("%d ", result[i][j]);
	   }
	   printf("\n");
   }
   return 0;
}

