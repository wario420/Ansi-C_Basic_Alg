#include <stdio.h>

// prototype
int sumArray(int arr[11], int length);

int main(void){
	int feld[] = {1,1,3,1,1,4,1,1,1,2,1};
	int length  = 11;
	int result = sumArray(feld,length);
	printf("%d", result);
	return 0;
}

// maxArray Function
int sumArray(int arr[11], int length){
    int sum = 0;
    for (int counter = 0; counter<length; counter++){
        sum = sum+arr[counter];
        
    }
    return sum;
}