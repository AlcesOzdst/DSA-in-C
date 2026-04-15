#include <stdio.h>
#include <string.h>

void read(char A[][20], int n);
int Binary_search(char A[][20], int n, char key[]);

int main()
{
    char A[10][20];   // array of strings
    int n, L;
    char key[20];

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter SORTED strings (alphabetical order):\n");
    read(A, n);

    printf("Enter string to search: ");
    scanf("%s", key);

    L = Binary_search(A, n, key);

    if (L == -1)
        printf("Not found\n");
    else
        printf("Found at location %d\n", L + 1);

    return 0;
}

void read(char A[][20], int n)
{
    for (int i = 0; i < n; i++)
        scanf("%s", A[i]);
}

int Binary_search(char A[][20], int n, char key[])
{
    int low = 0, high = n - 1, mid;

    while (low <= high)
    {
        mid = (low + high) / 2;

        int cmp = strcmp(key, A[mid]);

        if (cmp == 0)
            return mid;
        else if (cmp < 0)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}
