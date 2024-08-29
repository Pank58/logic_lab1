#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int max=100, min=-100, i = 0,j=0, line=0, column=0, t, sumpr=0;
    int **a;
    int* sum=nullptr;

    printf("input count line mass:");
    scanf("%d", &line);
    printf("input count column mass:");
    scanf("%d", &column);

    a = (int**)malloc((line*2) * sizeof(int));

    for (i=0; i < line; i++) {
        a[i] = (int*)malloc(column * sizeof(int));
        for (j=0; j < column; j++) {
            a[i][j] = min+ rand()%(max-min+1);
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("inut 1 for sum column or input 2 for sum line: ");
    scanf("%d", &t);
    if (t == 1) {
        sum = (int*)malloc(column * sizeof(int)+1);
            for (j = 0; j < column; j++) { 
                sumpr = 0;
                for (i = 0; i < line; i++) {
                    sumpr = sumpr + a[i][j];
                }
                sum[j] = sumpr;
            }  
            for (int k = 0; k < column; k++) {
                printf("sum Column %d=%d ", k, sum[k]);
            }
            free(sum);
    }
    else if (t == 2) {
        sum = (int*)malloc(line * sizeof(int) + 1);
        for (i = 0; i < line; i++) {
            sumpr = 0;
            for (j = 0; j < column; j++) {
                sumpr = sumpr + a[i][j];
            }
            sum[i] = sumpr;
        }
        for (int k = 0; k < column; k++) {
            printf("sum line %d=%d ", k, sum[k]);
        }
        free(sum);
    }
    else
    {
        printf("error");
    }
    
    
    for (i = 0; i < line; i++) {
        free(a[i]);
    }
    free(a);
    return 0;
}

