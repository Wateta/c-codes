#include <stdio.h>

// Recursive function to find largest element
int findMax(int arr[], int n) {
    if (n == 1)
        return arr[0];

    int max = findMax(arr, n - 1);
    return (arr[n - 1] > max) ? arr[n - 1] : max;
}

int main() {
    int n, i, arr[100];

    printf("Enter number of elements:");
    scanf("%d", &n);


    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Largest element = %d\n", findMax(arr, n));

    return 0;
}

