#include <stdio.h> 

int main(){
	int sum = 0;

	for(int i = 0; i < 10; i = i+1){
	sum = sum+i;
	}
	printf("Sum is %d\n", sum);
}
