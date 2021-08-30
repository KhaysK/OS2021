#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
    for(int i = 1; i <= atoi(argv[1]); i++){
      for (int j = i; j < atoi(argv[1]); j++){
        printf(" ");
      }
      for (int j = i; j > 1; j--){
        printf("*");
      }
      for (int j = i; j <  2 * i; j++)
      {
        printf("*");
      } 
      printf("\n");
    }
    return 0;
}