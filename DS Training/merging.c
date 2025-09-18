#include <stdio.h>
int main() 
{
    int a[] = {1, 3, 5, 7};
    int b[] = {2, 4, 6, 8, 9};
    int m = sizeof(a) / sizeof(a[0]);
    int n = sizeof(b) / sizeof(b[0]);
    int merged[m + n];
    int i = 0, j = 0, k = 0;
    while ((i < m) && (j < n)) {
        if (a[i] < b[j]) {
            merged[k] = a[i];
            i++;
        } else {
            merged[k] = b[j];
            j++;
        }
        k++;
    }
    while (i < m) {
        merged[k] = a[i];
        i++;
        k++;
    }
    while (j < n) {
        merged[k] = b[j];
        j++;
        k++;
    }
    printf("Merged array:\n");
    for (int x = 0; x < m + n; x++) {
        printf("%d ", merged[x]);
    }
    printf("\n");
    return 0;
}