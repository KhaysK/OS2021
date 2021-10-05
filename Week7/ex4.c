#include <stdio.h>
#include <stdlib.h>
#include "string.h"

void *realloc_02(void *ptr, size_t size){
    void *pointer = malloc(size);
    if(ptr == NULL)
        return pointer; 
    else{
        memcpy(pointer, ptr, size);
        free(ptr);
        return pointer;
    }

}

int main() {
	int *arr = malloc(5 * sizeof(int));
	for (int i = 0; i < 5; i++) {
		arr[i] = 100;
	}
    for (int i = 0; i < 5; i++) {
		printf("Old element no. %d is [%d]\n", i, arr[i]);
	}
    printf("\n");
	
    arr = realloc_02(arr, 10 * sizeof(int));
	for (int i = 0; i < 10; i++) {
		printf("Element no. %d is [%d]\n", i, arr[i]);
	}
	free(arr);
    return 0;
}