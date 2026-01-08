#include <stdio.h>

#define ROWS 2
#define COLS 2
int main() {
    int arr1[ROWS][COLS];
    int i, j;
    for(i=0; i<ROWS; i++) {
        for(j=0; j<COLS; j++) {
            printf("Enter the elements for [%d][%d]: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    for(i=0; i<ROWS; i++) {
        for(j=0; j<COLS; j++){
            printf("[%d]", arr1[i][j]);
        }
        printf("\n");
    }
    return 0;
}