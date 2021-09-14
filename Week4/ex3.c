#include <stdio.h>
#include <stdlib.h>

int main(void){
    char command[50];
    while (1)
    {
        scanf("%s", command);
        system(command);    
    }
    return 0;
}
