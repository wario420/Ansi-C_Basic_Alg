#include <stdio.h>

// Prototyp
int modrek(int dividend, int modulo);

int main(void){

	return 0;
}



// Rekursive Hilfsfunktion
int modrek(int dividend, int modulo){
	if (dividend-modulo<0){
		return dividend;
		}
	else{
		return modrek(dividend-modulo, modulo);
		}
	}