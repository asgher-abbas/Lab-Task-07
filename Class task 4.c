#include<stdio.h>

int main(){
	int matrix[3][4] ={{10, 22, 35, 41}, {50, 65, 73, 80}, {91, 10, 11, 12}};
int sum = 0;
int i, j, total = 0;
int max = matrix[0][0];
for(i = 0; i < 3; i++){
	for(j = 0; j < 4; j++){
		sum += matrix[i][j];
	}
	printf("Matrix[%d][%d] your sum is %d\n", i, j, sum);
	total += sum;
}
	printf("Total sum = %d", total);

for(i = 0; i < 3; i++){
	for(j = 0; j < 4; j++){
		if(matrix[i][j] > max){
			max = matrix[i][j];
		}

	}
}
		printf("\nMax = %d", max);
}
