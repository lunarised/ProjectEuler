#include <cstdlib>
#include<iostream>
#define MAX 1000
int main(){
int sum = 0;
	for (int i = 0; i < MAX; i++){
		if(i%3 == 0 || i%5 == 0){
			sum += i;

	}
	}
	std::cout << sum << std::endl;
	return EXIT_SUCCESS;
}
