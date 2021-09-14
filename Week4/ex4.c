#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>


int main ()
{
    char command[1000];
    char* args[1000];
    while(1)
    {
        for(int i=0; i<1000; i++)
        {
            command[i] = '\0';
            args[i] = NULL;
        }
        fgets(command, sizeof(command), stdin);
        int j = 0, k = 0;
        args[0] = (char*) malloc(1000);
        for(int i=0; i<strlen(command)-1; i++)
        {
            if(command[i] == ' ')
            {
                args[j++][k] = '\0';
                args[j] = (char*) malloc(1000);
                k = 0;
            }
            else
                args[j][k++] = command[i];
        }
        if(fork() == 0)
            execvp(args[0], args);
    }
}