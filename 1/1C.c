#include <stdio.h>
int main(){
	int sum = 0;
	int MAX = 1000;
	int i = 0;
	for (i; i<MAX; i++){
		if (i%3 == 0 || i%5 == 0){
			sum = sum + i;
		}
	}
	printf("Max is %d\n", sum);
	return 0;
}	
