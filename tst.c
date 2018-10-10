#include <stdio.h>

int func(int n)
{
	int sum =0;
	int i = 0;
	for(i=0; i < n; i++)
		sum += i;
	return sum;
}

int  main()
{
	long int result = 0;
	int i = 1;
	for(i = 1; i <= 100; i++)
		result +=i;
	printf("result[1-100] = %ld\n",result);
	printf("result[1-250] = %d \n", func(250));
	return 0;
}
