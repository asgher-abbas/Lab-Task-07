#include <stdio.h>

int main(){
	for(int r = 1; r <= 5; r++){
	for(int tr = 5; tr > r; tr--){
	printf(" ");
}
	for(int c = 1; c <= r; c++){
		printf("* ");
	}
	printf("\n");
}

}
