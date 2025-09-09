#include <stdio.h>
int main() 
{
    int arr1[100], arr2[100], difference[100];
    int n1, n2, k = 0;
    printf("Enter number of elements in Set A: ");
    scanf("%d", &n1);
    printf("Enter elements of Set A:\n");
    for (int i = 0; i < n1; i++) 
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter number of elements in Set B: ");
    scanf("%d", &n2);
    printf("Enter elements of Set B:\n");
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    for (int i = 0; i < n1; i++) 
    {
        int found_in_B = 0;
        for (int j = 0; j < n2; j++)
        {
            if (arr1[i] == arr2[j]) 
            {
                found_in_B = 1;
                break;
            }
        }
        if (!found_in_B) 
        {
            int duplicate = 0;
            for (int m = 0; m < k; m++) 
            {
                if (difference[m] == arr1[i]) 
                {
                    duplicate = 1;
                    break;
                }
            }
            if (!duplicate) 
            {
                difference[k++] = arr1[i];
            }
        }
    }
    printf("Set Difference (A - B): ");
    if (k == 0) {
        printf("Empty Set\n");
    } 
    else 
    {
        for (int i = 0; i < k; i++) {
            printf("%d ", difference[i]);
        }
        printf("\n");
    }
    return 0;
}
