#include "stdlib.h"
#include "stdio.h"
#include "sys/dir.h"
#include "unistd.h"

int main() {
    DIR *dir;
    struct dirent *opened_dir;
    dir = opendir("/");
    
    printf("Files: \n \n");
    while((opened_dir = readdir(dir)) != NULL){
        printf("%s\n", opened_dir->d_name);
    }

    closedir(dir);
    return 0;
}