#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, *ptr, sum = 0;

    // Asking user for the number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory using malloc (without casting)
    ptr = calloc(n, sizeof(int));

    // Check if malloc succeeded
    if (ptr == NULL)
    {
        printf("Sorry! Unable to allocate memory.");
        exit(1); // Exit with error code
    }

    // Input elements into the array
    for (i = 0; i < n; i++)
    {
        printf("Enter elements of index %d the array: ", i);
        scanf("%d", ptr + i);
        sum += *(ptr + i); // Calculate the sum
    }

    // Output the sum of the elements
    printf("Sum is %d\n", sum);

    // Free the allocated memory
    free(ptr);

    return 0;
}
