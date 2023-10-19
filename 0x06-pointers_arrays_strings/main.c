#include "main.h"
#include <stdio.h>

int main(void)
{
    int array[] = {1, 2, 3, 4, 5};
    int n = 5;

    printf("Original Array: ");
    print_array(array, n);

    reverse_array(array, n);

    printf("Reversed Array: ");
    print_array(array, n);

    return (0);
}
