#include <stdio.h>

int strLen(char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
        count++;
    return count;

    // int count = 0;
    // for (int i = 0;; i++)
    //     if (str[i] == '\0')
    //         break;
    //     else
    //         count++;
    // return count;

    // int count = 0;
    // while (str[count] != '\0')
    //     count++;
    // return count;

    // int i;
    // for (i = 0; str[i]; i++);
    // return i;
}

void strCpy(char str1[], char str2[]) {
    int i = 0;
    while (str2[i] != '\0') {
        str1[i] = str2[i];
        i++;
    }
    str1[i] = '\0';// null character
}

char* strRev(char str[]) {
    int i, len = strLen(str);
    char temp;
    for (i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    return str;
}

void strUpper(char str[]) {
    int i;
    for (i = 0; str[i]; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }
    printf("%s", str);
}

void strLower(char str[]) {
    int i;
    for (i = 0; str[i]; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }
    printf("%s", str);
}


int main() {
    // code 66
    printf("The Length is: %d\n", strLen("hello"));

    // code 67
    char str1[100] = "Hello, world!";
    char str2[100];
    strCpy(str2, str1);
    printf("%s\n", str2);

    //code 68
    char str[] = "Hello";
    printf("String Reverse: %s\n", strRev(str));

    // code 69
    char str3[] = "string";
    strUpper(str3);
    printf("\n");

    // code 70
    char str4[] = "STRING";
    strLower(str4);

    return 0;
}