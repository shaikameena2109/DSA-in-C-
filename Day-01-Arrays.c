#include <stdio.h>

int main()
{
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5;
    int i, key, position, value;

    // 1. Array Traversal
    printf("Array elements: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    // 2. Linear Search
    key = 30;

    printf("\n\nSearching for %d...\n", key);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            printf("Element found at index %d\n", i);
            break;
        }
    }

    if (i == n)
    {
        printf("Element not found\n");
    }

    // 3. Insertion
    position = 2;
    value = 25;

    for (i = n; i > position; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[position] = value;
    n++;

    printf("\nAfter insertion: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr