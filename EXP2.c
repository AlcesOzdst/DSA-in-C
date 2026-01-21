#include <stdio.h>
void read(int [], int);
void display(int [], int);
int LinearSearch(int [], int, int);
int BinarySearch(int [], int, int);
int main(){
    int A[10], n, ch, key, L;
    printf("Enter Size:\n");
    scanf("%d", &n);
    do
    {
        printf("1. Linear Search\n2. Binary Search\n3. Exit\n");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1: printf("Enter array Elements:\n");
                    read(A, n);
                    printf("Enter Key to be Searched:\n");
                    scanf("%d", &key);
                    L = LinearSearch(A, n, key);
                    break;
            case 2: printf("Enter array Elements in Sorted Order:\n");
                    read(A, n);
                    printf("Enter Key to be Searched:\n");
                    scanf("%d", &key);
                    L = BinarySearch(A, n, key);
                    break;
        }
        if(L==-1)
            printf("Element not Found\n");
        else
            printf("Element Found at Position %d\n", L+1);
    }while(ch!=3);
    return 0;
}
void read(int S[], int n)
{
    int i;
    for(int i=0; i<n; i++){
        scanf("%d", &S[i]);
    }
}
void display(int A[], int n)
{
    int i;
    for(i=0; i<n; i++){
        printf("A[%d]=%d\n", i, A[i]);
    }
}
int LinearSearch(int A[], int n, int key)
{
    int i;
    for(i=0; i<n; i++){
        if(A[i]==key)
            return i;
    }
    return -1;
}
int BinarySearch(int A[], int n, int key)
{
    int low, high, mid;
    low = 0;
    high = n-1;
    while(low<=high)
    {
        mid = (low+high)/2;
        if(A[mid]==key)
            return mid;
        else if(key<A[mid])
            high = mid-1;
        else
            low = mid+1;
    }
    return -1;
}