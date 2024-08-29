#include <stdio.h>
#include <stdlib.h>

int main()
{
    int max=100, min=-100, n = 10, i = 0;
    int a[10];

    for (i; i < n; i++) {
        a[i] = min+ rand()%(max-min+1);
        printf("a[%d] = %d \ns",i ,a[i]);
    }
}

