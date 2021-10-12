#include <stdlib.h>
#include <unistd.h>
#include <string.h> 

int main(){
    for(int i =0; i < 30; i++){
        int *ptr = malloc(1024*1024*1024);
        memset(ptr, 0 , 1024*1024*1024);
        sleep(1);
    }
    return 0;
}

//When we use calloc swaps does not happen
//but when we use malloc we alocate 1gb per second and initialize it
//in vmstat we can changes in swaps