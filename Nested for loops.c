#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<conio.h>

int main(int  argc, char** argv) {

	unsigned int N, i, j;
	printf("Enter a positive integer: ");
	scanf("%d", &N);
	for (i = 1; i <= N; i++)
	{
	for (j = 1; j <= i; j++)
	printf("%d ", j);
	printf("\n");
	}
}
