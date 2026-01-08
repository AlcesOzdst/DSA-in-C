#include <stdio.h>

#define ROWS 2
#define COLS 2

int main() {
    int arr1[ROWS][COLS];
    int arr2[ROWS][COLS];
    int sum[ROWS][COLS];
    int i, j, p, q;
    for(i=0; i<ROWS; i++) {
        for(j=0; j<COLS; j++) {
            printf("Enter the elements for arr1 [%d][%d]: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    for(p=0; p<ROWS; p++) {
        for(q=0; q<COLS; q++) {
            printf("Enter the elements for arr2[%d][%d]: ", p, q);
            scanf("%d", &arr2[p][q]);
        }
    }
    printf("arr1 elements ar:\n");
    for(i=0; i<ROWS; i++) {
        for(j=0; j<COLS; j++){
            printf("[%d]", arr1[i][j]);
        }
        printf("\n");
    }
    printf("arr2 elements are:\n");
    for(p=0; p<ROWS; p++) {
        for(q=0; q<COLS; q++) {
            printf("[%d]", arr2[p][q]);
        }
        printf("\n");
    }
    printf("Sum of two arrays is:\n");
    for(i=0; i<ROWS; i++){
        for(j=0; j<COLS; j++){
            sum[i][j] = arr1[i][j] + arr2[i][j];
            printf("[%d]", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}