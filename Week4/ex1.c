#include <stdio.h>
#include <unistd.h>

int main(void){
    int pid = fork();
    int n = 13;
    if (pid== 0)
    {
        printf("Hello from child [%d - %d]\n", pid, n);
    }
    else {
        printf("Hello from parent [%d - %d]\n", pid, n);
    }
    return 0;
}
