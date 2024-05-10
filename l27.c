#include <stdio.h>

int countVowel(char str[])
{
    int count = 0;
    for (int i = 0; str[i]; i++)
    {
        if (str[i] == 'a' ||
            str[i] == 'A' ||
            str[i] == 'e' ||
            str[i] == 'E' ||
            str[i] == 'i' ||
            str[i] == 'I' ||
            str[i] == 'o' ||
            str[i] == 'O' ||
            str[i] == 'u' ||
            str[i] == 'U')
            count++;
    }
    return count;
}

int isAphaNum(char str[])
{
    int alpha = 0, digit = 0;
    for (int i = 0; str[i]; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
            digit++;
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            alpha++;
    }
    if (digit && alpha)
        return 1;
    return 0;
}

int main() {
    // code 71
    char str[] = "Hello";
    printf("%d\n", countVowel(str));

    // code 72
    printf("%d\n", isAphaNum("Hello123"));
    return 0;
}