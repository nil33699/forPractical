#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr, *ptr_calloc, *temp_ptr;
    int n, i;

    // Using malloc()
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    ptr = (int*)malloc(n * sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    printf("Memory allocated using malloc. Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
    }
    
    // Using calloc()
    ptr_calloc = (int*)calloc(n, sizeof(int));
    if (ptr_calloc == NULL) {
        printf("Memory allocation failed!\n");
        free(ptr);
        return 1;
    }
    printf("Memory allocated using calloc. Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &ptr_calloc[i]);
    }
    
    // Using realloc()
    printf("Enter the new size: ");
    scanf("%d", &n);
    
    temp_ptr = (int*)realloc(ptr, n * sizeof(int));
    if (temp_ptr == NULL) {
        printf("Memory reallocation failed!\n");
        free(ptr_calloc);
        return 1;
    }
    ptr = temp_ptr;
    printf("Memory reallocated using realloc.\n");
    
    // Free allocated memory
    free(ptr);
    free(ptr_calloc);
    printf("Memory freed.\n");
    
    return 0;
}
