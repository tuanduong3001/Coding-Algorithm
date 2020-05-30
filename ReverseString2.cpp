#include<stdio.h>

int main()
{
	int n;
	do
	{
		scanf_s("%d", &n);
	} while (n <= 0);
	int arr[1000];
	for (int i = 0; i < n; i++) {
		scanf_s("%d",(arr+i));
	}
	for (int i = 0; i < n; i++)
	{
		printf("%d ",*(arr+i));
	}
}