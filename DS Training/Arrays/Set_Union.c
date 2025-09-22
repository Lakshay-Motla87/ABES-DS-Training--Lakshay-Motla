#include <stdio.h>
int main() {
    int arr1[] = {55,41,23,68,74};
    int arr2[] = {34, 94, 35, 67, 23, 68};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int unionSet[n1 + n2]; 
    int k = 0; 
    for (int i = 0; i < n1; i++) {
        int Duplicate = 0;
        for (int j = 0; j < k; j++) {
            if (unionSet[j] == arr1[i]) {
                Duplicate = 1;
                break;
            }
        }
        if (!Duplicate) {
            unionSet[k++] = arr1[i];
        }
    }
    for (int i = 0; i < n2; i++) {
        int Duplicate = 0;
        for (int j = 0; j < k; j++) {
            if (unionSet[j] == arr2[i]) {
                Duplicate = 1;
                break;
            }
        }
        if (!Duplicate) {
            unionSet[k++] = arr2[i];
        }
    }
    printf("Union of the two sets: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", unionSet[i]);
    }
    printf("\n");
    return 0;
}
