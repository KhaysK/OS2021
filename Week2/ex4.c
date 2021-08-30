#include <stdio.h>
#include <string.h>

void swap (int *first, int *second)
{
    int temp = *first;
    *first = *second;
    *second = temp;
}

int main(void){

    int first_num;
    int second_num;

    printf("Enter the first integer: ");
    scanf("%d", &first_num);

    printf("Enter the second integer: ");
    scanf("%d", &second_num);

    swap(&first_num, &second_num);

    printf("First integer now is: %d\n", first_num);
    printf("Second integer now is: %d\n", second_num);

    return 0;
}
