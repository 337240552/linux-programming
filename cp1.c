#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <time.h>
#include <sys/timeb.h>

#define PERMS 0666
#define BUFFSIZE 4096

long long get_time()
{
	struct timeb t;
	ftime(&t);
	return 1000 * t.time + t.millitm;
}

int main(int argc, char const *argv[])
{
	char buf[BUFFSIZE];

	int f1, f2, n ;

	if ((f1 = open(argv[1], O_RDONLY, 0)) == -1)
		printf("cp: can't open %s\n", argv[1]);
	if ((f2 = creat(argv[2], PERMS)) == -1)
		printf("cp: can't create %s\n", argv[1]);

	clock_t start = clock();
	//long long start = get_time();

	while ((n = read(f1, buf, BUFFSIZE)) > 0)
		if (write(f2, buf, n) != n)
			printf("cp: write error on file %s\n", argv[2]);;

	double end = (double (clock() - start)) / CLOCKS_PER_SEC;
	printf("copy takes: %f", end);
//		long long end = get_time();
//		printf("time: %lld ms\n", end - start);

	return 0;
}