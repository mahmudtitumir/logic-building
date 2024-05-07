#include <stdio.h>

int arrSum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    return sum;
}

int indexGreatNum(int arr[], int size) {
    int max = arr[0],
        index = 0;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            index = i;
        }
    }
    return index;
}

void rotateRight(int arr[], int size) {
    int temp = arr[size - 1];
    for (int i = size - 2; i >= 0; i--)
        arr[i + 1] = arr[i];
    arr[0] = temp;
}

void rotateNtime(int arr[], int size, int position) {
    while (position--)
        rotateRight(arr, size);
}

int main(int argc, char const* argv[])
{
    // code 58
    int arr[] = { 4, 5, 3, 8 };
    printf("The array sum: %d\n", arrSum(arr, 4));

    // code 59
    printf("The array index is %d\n", indexGreatNum(arr, 4));

    // code 60
    rotateRight(arr, 5);
    printf("Array Right Position:\n");
    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    printf("\n");

    // code 61
    printf("Array N position:\n");
    rotateNtime(arr, 5, 2);
    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    return 0;
}
