#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<conio.h>


int main(int  argc, char** argv) {

    unsigned int u, i;
    printf("Enter a positive integer number: ");
    scanf("%d", &u);
    printf("Following are the numbers from 0 to %d that are divisble by 3 or 4.\n", u);
    for (i = 1; i <= u; i++)
    {
     if (i % 3 == 0 || i % 4 == 0)
     printf("%d ", i);
    }
}