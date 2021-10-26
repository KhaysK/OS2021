#include <stdio.h>
#include <sys/types.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <dirent.h>

int main(void){	
	char *dirname = "./tmp";
	DIR *dir = opendir(dirname);

	if (dir == NULL){
		printf("Error opening dir\n");
		return 1;
	}

    struct dirent *currentFile;
    while ((currentFile = readdir(dir)) != NULL){
        if(!strcmp(currentFile->d_name, ".." ) || !strcmp(currentFile->d_name, "."))
            continue;
		printf("%s - %ld\n", currentFile->d_name, currentFile->d_ino);
	};

    closedir(dir);
	return 0;
}
