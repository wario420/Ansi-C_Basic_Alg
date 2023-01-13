#include <stdio.h>


// prototype 
int fib(int in);

int main(void){
	int res = fib(6);
	printf("%d", res);
	return 0;
}

// helpfunction
int fib(int in){
	int erg = 0;
	if (in == 0){
		return 0;
		}
	
	if (in == 1) {
		return 1;
		}
	
	else{
		int x = 0;
		int y = 1;
		for (int i = 2; i <= in; i++){
			erg = x + y;
			x = y;	
			y = erg;
			}
	return erg;
		
		}
	
	}