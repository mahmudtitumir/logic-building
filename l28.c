#include <stdio.h>
#include <string.h>


int strComp(char str1[], char str2[])
{
    int i = 0;
    while (str1[i] == '\0' && str2[i] == '\0')
    {
        if (str1[i] == str2[i])
            i++;
    }
    if (str1[i] == str2[i])
        return 0;
    else if (str1[i] > str2[i])
        return 1;
    else
        return -1;
}

int checkPattern(char str[], char pattern[])
{
    int i, j, k;
    for (i = 0; i <= strlen(str) - strlen(pattern); i++)
    {
        for (j = i, k = 0; pattern[k]; j++, k++)
            if (pattern[k] != str[j])
                break;
        if (k == strlen(pattern))
            return (i + 1);
    }
    return -1;
}

int main() {

    // code 72
    printf("%d\n", strComp("hello", "Hello"));

    // code 73
    printf("%d\n", checkPattern("aabbccaaabbcddabc", "aaa"));
    printf("%d\n", checkPattern("aabbccaaabbcddabc", "bcd"));

    return 0;
}