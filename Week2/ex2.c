#include <stdio.h>
#include <string.h>

int main(void){

    char str[256];

    printf("Enter some string:\n");
    fgets(str, sizeof(str), stdin);

    printf("\nReversed string:\n");
    for(int i = strlen(str); i >= 0; i--){
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}