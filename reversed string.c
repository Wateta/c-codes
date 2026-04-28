#include <stdio.h>
#include <string.h>

void reverseString(char str[], int start, int end) {
    char temp;

    // Base case
    if (start >= end)
        return;

    // Swap characters
    temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    // Recursive call
    reverseString(str, start + 1, end - 1);
}

int main() {
    char str[100];
    int length;

    printf("Enter a string: ");
    scanf("%s", str);

    length = strlen(str);

    reverseString(str, 0, length - 1);

    printf("Reversed string: %s\n", str);

    return 0;
}
