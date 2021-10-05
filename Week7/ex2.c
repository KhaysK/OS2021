#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
    if(argc < 2){
        printf("Enter size of array please\n");
        return 0;
    }

    int n;
    sscanf(argv[1], "%d", &n);

    int *array = malloc (n * sizeof (int));

    for(int i = 0; i < n; i++)
        array[i] = i;

    for(int i = 0; i < n; i++)
        printf("Element no. %d - [%d]\n", i, array[i]);

    free(array);
    return 0;
}