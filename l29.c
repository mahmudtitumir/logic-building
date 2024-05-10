#include <stdio.h>
#include <string.h>

void sortcity(char city[][20], int n) {
    int i, j;
    char temp[20];
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strcmp(city[j], city[j + 1]) > 0) {
                strcpy(temp, city[j]);
                strcpy(city[j], city[j + 1]);
                strcpy(city[j + 1], temp);
            }
        }
    }
}

int main() {
    // code 74
    char city[5][20] = { "Dhaka", "Chittagong", "Rajshahi", "Khulna", "Sylhet" };
    sortcity(city, 5);
    for (int i = 0; i < 5; i++)
        printf("%s\n", city[i]);

    return 0;
}