#include <stdio.h>

#ifndef LOWER
#define LOWER 0
#endif

#ifndef UPPER
#define UPPER 300 //upper limit
#endif

#ifndef STEP
#define STEP 20 /* step size */
#endif

/*print Fahrenheit-Celsius table*/
main(){
	int fahr;

	for(fahr = LOWER; fahr <= UPPER; fahr += STEP){
		printf("%3d %6.1f\n", (5.0 / 9) * (fahr - 32));
	}
}