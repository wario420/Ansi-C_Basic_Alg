#include <stdio.h>

// prototype
int prim(int n);

int main(void){
	int result = prim(10);
	printf("%d", result);
	return 0;
}

// prim Function
int prim(int n){
    int t = n/2;
    int res;

    for (int x = 0; x<=t; x++){
        if(n%t !=0){
            res = 1;
        }
        else{
            res = 0;
        }
        t = t-1;
    }
    return res;
}