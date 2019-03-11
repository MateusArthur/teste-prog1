#include <stdio.h>
#include "matematica.h"

int main(){
	int r = soma(1,3);
	printf("R = %d\n", r);
	int s = sub(4,3);
	printf("S = %d\n", s);
	int m =  multi(5,8);
	printf("M =  %d\n", m);
	int q = quad(4,2);
	printf("Q = %d\n", q);
	return 0;
}
