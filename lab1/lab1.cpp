#include <stdio.h>
#include <limits.h>

int main()
{
    int max=INT_MIN, min=INT_MAX, n = 10, i = 0;
    int a[10];

    for (i; i < n; i++) {
        a[i] = i * 4 + 3;
        printf("%d ", a[i]);
    }

    i = 0;
    for (i; i < n; i++) {
        if (a[i] > max) max = a[i];
        if (a[i] < min) min = a[i];
    }

    printf("\n max-min=%d", max-min);
}

