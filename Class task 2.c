#include<stdio.h>

int main(){
int id[5] = {101, 205, 103, 205, 101};

for(int i = 0; i <= 5; i++){
	for(int j = i + 1; j <= 5; j++){
		
		if(id[i] == id[j]){
			printf("\nDuplicate id %d", id[i]);
		}
	}
		printf("\n");
}
}
