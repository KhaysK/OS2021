#include <stdlib.h>
#include <unistd.h>
#include <string.h> 
#include <sys/resource.h>
#include <stdio.h>

int main(){
    struct rusage my_rusage;
    for(int i =0; i < 10; i++){
        int *ptr = malloc(1024*1024*10);
        memset(ptr, 0 , 1024*1024*10);
        getrusage(RUSAGE_SELF, &my_rusage);
        printf("Memory usage: %ld\n", my_rusage.ru_maxrss);
        sleep(1);
    }
    return 0;
}
