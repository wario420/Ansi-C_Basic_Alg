#include <stdio.h>

// Prototyp
int divrek(int dividend, int divisor);

int main(void){

	return 0;
}



// Rekursive Hilfsfunktion
int divrek(int dividend, int divisor){
	if (dividend < divisor){
		return 0;
		}
	else{
		return 1 + divrek(dividend - divisor, divisor);
		}
}