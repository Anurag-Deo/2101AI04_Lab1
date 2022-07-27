#include <stdio.h>

// Insertion Sort Function
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// Selection Sort Function
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

int main(){
    printf("Choose one options from the following:\n");
    printf("1. Insertion Sort\n");
    printf("2. Selection Sort\n");
    printf("3. Bubble Sort\n");
    printf("4. Merge Sort\n");
    printf("5. Quick Sort\n");
    printf("6. Exit\n");
    int choice;
    scanf("%d", &choice);
    if(choice == 1){
        printf("Insertion Sort\n");
        int n;
        printf("Enter the number of elements in the array: ");
        scanf("%d", &n);
        int arr[n];
        printf("Enter the elements of the array: ");
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        insertionSort(arr, n);
        printf("The sorted array is: ");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    else if(choice == 2){
         printf("Selection Sort\n");
        int n;
        printf("Enter the number of elements in the array: ");
        scanf("%d", &n);
        int arr[n];
        printf("Enter the elements of the array: ");
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        selectionSort(arr, n);
        printf("The sorted array is: ");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    else{
        printf("Invalid choice. Exiting...\n");
    }
    return 0;
}