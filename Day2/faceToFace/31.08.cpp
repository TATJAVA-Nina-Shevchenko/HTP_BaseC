// To disable deprecation: warning C4996: 'scanf': This function or variable may be unsafe.
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <clocale>
#include <string.h>
#include <math.h>

int findIndexMax(double*, const int);
int findIndexMin(double*, const int);
void swapArrayElements(double*, int, int);


void main (void)
{
	setlocale(LC_ALL,"Russian");

	const int N = 5;
	double arr[N];

	puts("Введите элементы массива");

	for (int i = 0; i < N; ++i)
		{
			printf("[%d]=",i);
			scanf("%lf",&arr[i]);
		}

	printf("Индекс максимального значения = %d\n", findIndexMax(arr, N));

	swapArrayElements(arr, findIndexMax(arr, N),findIndexMin(arr, N));

	for (int i = 0; i < N; ++i)
		{
			printf("%.2lf\n",arr[i]);
		}
}

int findIndexMax(double* arr, const int N)
{
	int index = 0;

	for(int i=0; i < N; ++i)
		{
			index = (arr[index] < arr[i]) ?  i  : index;
		}

	return index;
}

int findIndexMin(double* arr, const int N)
{
	int index = 0;

	for(int i=0; i < N; ++i)
		{
			index = (arr[index] > arr[i]) ?  i  : index;
		}

	return index;
}

void swapArrayElements(double* arr, int ind_1, int ind_2)
{
	double temp = arr[ind_1];
	arr[ind_1] = arr[ind_2];
	arr[ind_2] = temp;
}