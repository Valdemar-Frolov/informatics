#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <malloc.h>
int main()
{
	int* M = NULL;
	int* buf = NULL;
	int* N = NULL;
	int i=0, n, m, j=0;
	int k = 0, p;

	printf("n=");
	scanf("%d", &n);
	printf("p=");
	scanf("%d", &p);

	m = n;
	M = (int*)malloc(n * sizeof(int));
	N = (int*)malloc(n * sizeof(int));

	for (i = 0; i < m; i++)
	{
			scanf("%d", &M[i]);
	}
	
	for (i = 0; i < m; i++)
	{
		if (M[i] % p == 0)
		{
			N[j] = M[i];
			j++;
			k++;
		}
	}

	k = n - k;
	m = n - k;

	buf = realloc(N, m * sizeof(int));
	N = buf;

	for (i = 0; i < m; i++)
	{
			printf("%d ", N[i]);
	}

	while (getchar() != '\n');
	getchar();


	free(M);
	free(N);

	return 0;
}