#include <stdio.h>
int main()
{
	int s;
	const int a = 2;
	const int b = 2;
	int arr[a][b];
	printf("Input skaliar\n");
	scanf("%d", &s);
	printf("Input matricu\n");
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			scanf("%d", &arr[i][j]);
			arr[i][j] *= s;
		}
	}
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
