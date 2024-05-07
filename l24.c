#include <stdio.h>

void insertionSort(int arr[], int size) {
    int temp, j;
    for (int i = 1; i < size; i++) {
        temp = arr[i];
        for (j = i - 1; j >= 0; j--) {
            if (arr[j] > temp)
                arr[j + 1] = arr[j];
            else
                break;
        }
        arr[j + 1] = temp;
    }
}

void bubbleSort(int arr[], int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}


int main(int argc, char const* argv[]) {
    // code 63 insertion sort
    int arr1[5] = { 55, 33, 77, 22, 66 };
    printf("The Insertion Sort:\n");
    for (int i = 0; i < 5; i++)
        printf("%d ", arr1[i]);
    printf("\n");
    insertionSort(arr1, 5);
    for (int i = 0; i < 5; i++)
        printf("%d ", arr1[i]);
    printf("\n");

    // code 64 bubble sort
    int arr2[5] = { 55, 33, 77, 22, 66 };
    printf("The Bubble Sort:\n");
    for (int i = 0; i < 5; i++)
        printf("%d ", arr2[i]);
    printf("\n");
    bubbleSort(arr2, 5);
    for (int i = 0; i < 5; i++)
        printf("%d ", arr2[i]);

    return 0;
}
