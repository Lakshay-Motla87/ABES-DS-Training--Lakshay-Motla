#include <stdio.h>
int main() 
{
    int arr1[100], arr2[100], intersection[100];
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
        for (int j = 0; j < n2; j++)
         {
            if (arr1[i] == arr2[j])
             {
                int duplicate = 0;
                for (int m = 0; m < k; m++)
                 {
                    if (intersection[m] == arr1[i])
                    {
                        duplicate = 1;
                        break;
                    }
                }
                if (!duplicate)
                {
                    intersection[k++] = arr1[i];
                }
            }
        }
    }
    printf("Intersection of the sets: ");
    if (k == 0) {
        printf("Empty Set\n");
    } else {
        for (int i = 0; i < k; i++) 
        {
            printf("%d ", intersection[i]);
        }
        printf("\n");
    }
    return 0;
}
