#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    // ptr = (int *)malloc(20);
    // ptr = (int *)malloc(5 * sizeof(int));
    // ptr = (int *)calloc(5, sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory is not allocated\n");
    }
    else
    {
        printf("Memory is successfully allocated\n");
        free(ptr);
    }

    return 0;
}

/*


What is dynamic memory allocation?

during running the code or within run time, Allocation of the memory is called dynamic memory allocation.


it is available under <stdlib.h> header:
* malloc(): (memory allocation) dynamically allocates a single learge block of memory with the specified size; ptr = (cast_type*)malloc(byte_size)
* calloc(): (contiguous allocation) dynamically allocates the specified number of blocks of memory of the specified type; ptr = (cast_type)calloc(n,element_size)
* free(): used to dynamically de-allocate the memory
* realloc(): (re-allocation) dynamically changes the memory allocation of a previously allocated memory; ptr = realloc(ptr.newSize)

malloc vs calloc: after allocating space by malloc, it doesnt initialize the places but calloc initializes the places with 0 (zero)

*/