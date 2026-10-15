#include<stdio.h>

int main(){	
int t;
	printf("Enter number of tables: ");
	scanf("%d", &t);
	
	for(int r = 1; r <= t; r++){
		printf("%d:\t ", r);
		for(int c = 1; c <= 10; c++){
			rintf("%d\t ", r*c);
		}
		printf("\n");
	}
}
