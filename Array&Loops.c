#include <stdio.h>

int main() {
    #define ARRAYSIZE 5
    int aiARRAY[ARRAYSIZE],iCount;
    for (iCount = 0; iCount < ARRAYSIZE; iCount++) {
        printf("Enter %d element: ", iCount);
        scanf("%d", &aiARRAY[iCount]);
    }
    for(iCount = 0; iCount < ARRAYSIZE; iCount++) {
        printf("Element in %d position: %d\n", iCount, aiARRAY[iCount]);
    }
    for(iCount = 0; iCount < ARRAYSIZE; iCount++) {
        aiARRAY[iCount] = aiARRAY[iCount] * 2;
    }
    return 0;
}