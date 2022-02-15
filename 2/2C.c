#include <stdlib.h>
#include <stdio.h>

int fibN(int a, int b){
	return a + b;
}

int main(){
	int sum = 0;
	int fibValue = 0;
	int a = 1;
	int b = 0;
	int c = 0;
	while(fibValue < 4000000){
		fibValue = fibN(a, b);
		c = b;
		b = a;
		a = a + c;
		if (fibValue % 2 == 0){
			sum += fibValue;
		}
	}
	printf("%d\n", sum);
	return EXIT_SUCCESS;
}

