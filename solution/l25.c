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

void distictEle(int arr[], int size) {
    int i = 0, j, count;
    while (i < size) {
        count = 1;
        j = i + 1;
        while (j < size && arr[i] == arr[j]) {
            count++;
            j++;
        }
        printf("%d is %d times\n", arr[i], count);
        i = j;
    }
}

int main(int argc, char const* argv[])
{
    // code 65 distinct element
    printf("the distinct element\n");
    int arr[] = { 2, 3, 1, 2, 2, 1, 2, 4, 3, 2, 2, 1, 4, 3, 3, 2, 1, 4, 4, 1 };
    insertionSort(arr, 20);
    distictEle(arr, 20);

    return 0;
}
