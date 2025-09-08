#include <stdio.h>
int main() 
{
    int size, i, pos, element, found = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to delete: ");
    scanf("%d", &element);
    for (i = 0; i < size; i++) {
        if (arr[i] == element) {
            pos = i;
            found = 1;
            break;
        }
    }
    if (found) {
        for (i = pos; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--; 
        printf("Array after deletion:\n");
        for (i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}