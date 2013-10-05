#include <stdio.h>

int power(int m, int n);

main(){
	int i ;
	for(i = 0; i < 10; i++){
		printf("%d %d\n", i, power(2, i));
	}
	return 0;
}

/*power: raise base to n-th power; n >=0 */

int power(int base, int n){
	int i, p;

	p = 1;
	for (int i = 0; i < n; ++i)	{
		p = p * base;
	}
	return p;
}