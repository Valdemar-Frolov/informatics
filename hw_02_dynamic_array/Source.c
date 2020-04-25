#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <malloc.h>
int main()
{
	int** M = NULL;
	int* N = NULL;
	int buf = 0;
	int i, j, n, m, b, m1, n1;
	int size = 0, k = 0, key = 0, key1 = 0, key2 = 0, b1 = 1;
	int len, len1;
	printf("n=");
	scanf("%d", &n);
	printf("m=");
	scanf("%d", &m);

	M = (int**)malloc(sizeof(int*) * m);
	for (i = 0; i < n; i++)
	{
		M[i] = (int*)malloc(sizeof(int) * n);
	}
	N = (int*)malloc((n * m) * sizeof(int));
	n1 = n;
	m1 = m;

	len = m * n;
	len1 = len;
	i = 0;


	while (len > 0)
	{
		for (j = 0; j < 10; j++)
		{
			N[i] = j;
			i++;
			len--;
		}
		for (j = 8; j > 0; j--)
		{
			N[i] = j;
			i++;
			len--;
		}
	}

	if ((m1 == 1) || (n1 == 1))
		b = 1;

	if (m1 >= n1)
		b = n1;
	else
		b = m1;

	if (b % 2 == 1)
	{
		b++;
		b = b / 2;
	}
	else
		b = b / 2;

	b1 = b;

	if (m1 == 1)
	{
		for (i = 0; i <= n1 - 1; i++)
		{
			M[i][m1 - 1] = N[k];
			k++;
		}
		b = 0;
	}

	if (n1 == 1)
	{
		for (j = 0; j <= m1 - 1; j++)
		{
			M[0][j] = N[k];
			k++;
		}
		b = 0;
	}

	while (b != 0)
	{
		for (j = size; j < m1 - 1; j++)
		{
			M[size][j] = N[k];
			k++;
		}
		for (i = size; i < n1 - 1; i++)
		{
			M[i][m1 - 1] = N[k];
			k++;
		}
		for (j = m1 - 1; j > size; j--)
		{
			M[n1 - 1][j] = N[k];
			k++;
		}
		for (i = n1 - 1; i > size; i--)
		{
			M[i][size] = N[k];
			k++;
		}
		size = size++;
		n1 = n1--;
		m1 = m1--;
		b = b--;
	}

	if ((m % 2 == 1) && (n > m))
	{
		k = m * n - (n - m);
		for (i = 1 + (m - 1) / 2; i < n - (m - 1) / 2; i++)
		{
			M[i][(m - 1) / 2] = N[k];
			k++;
		}
	}
	else
		if ((m * n % 2 == 1) && (m == n))
			M[m - b1][n - b1] = N[m * n - 1];
		else
			if ((n % 2 == 1) && (n < m))
			{
				k = m * n - (m - n);
				for (j = 1 + (n - 1) / 2; j < m - (n - 1) / 2; j++)
				{
					M[(n - 1) / 2][j] = N[k];
					k++;
				}
			}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
			printf("%d  ", M[i][j]);
		printf("\n");
	}

	while (getchar() != '\n');
	getchar();

	for (i = 0; i < n; i++)
	{
		free(M[i]);
	}
	free(M);

	free(N);

	return 0;
}