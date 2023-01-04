#include <stdio.h>

// prototypes
int fibrek(int in);

int main(void){
	int result;
	result = fibrek(11);
	printf("%d", result);
	return 0;
}
// fib rekursiv function
int fibrek(int in){
    if (in ==0){
		return 0;
		}
	else if(in == 1){
		return 1;
		}
	else{
		return fibrek(in-1)+fibrek(in-2);
		}
}