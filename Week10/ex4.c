#include <errno.h>
#include <stdio.h>
#include <dirent.h>
#include <sys/stat.h>
#include <string.h>
#include <stdbool.h>

typedef struct{
    ino_t inode;
    char name[128];
    nlink_t links;
}file;


bool found = 0;
file files[128];
unsigned int counter = 0;
struct stat a;
struct dirent *currentFile;

int main(){
    DIR *dir=opendir("tmp");

    while((currentFile=readdir(dir))!=0){
        if (!strcmp(currentFile->d_name, ".") || !strcmp(currentFile->d_name, ".."))
			continue;

        char fileName[32];
        strcpy(fileName, "tmp/");
        strcat(fileName, currentFile->d_name);

        if(stat(fileName, &a)!=0)
            return ENOENT;
        found=0;

        for(int i=0;i<counter;i++){
            if(files[i].inode==a.st_ino){
                found=1;
                strcat(strcat(files[i].name, ", "), currentFile->d_name);
                files[i].links++;
                break;
            }
        }

        if(found)
            continue;
        
        File new;
        new.links=1;
        new.inode=a.st_ino;
        strcpy(new.name, currentFile->d_name);
        files[counter++]=x;
    }

    closedir(dir);
    for(int j=0;j<counter;j++) if(files[j].links>1) 
        printf("%s - %llu\n", files[j].names, files[j].inode);
    return 0;
}