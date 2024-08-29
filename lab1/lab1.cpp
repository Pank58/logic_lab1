#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int max=100, min=-100, i = 0, size_mas=0;
    int *a;

    printf("input size mass:");
    scanf("%d", &size_mas);

    a = (int*)malloc(size_mas * sizeof(int));

    for (i; i < size_mas; i++) {
        a[i] = min+ rand()%(max-min+1);
        printf("a[%d] = %d \n",i ,a[i]);
    }

    free(a);
}

