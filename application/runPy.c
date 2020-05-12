#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[]){
    FILE *pFile = NULL;
    char *filename = "./errorResponse.txt";
    pFile = fopen(filename, "w+");
    

    char command[] = {"python "};
    strncat(command,argv[1],sizeof(command));
    int result = system(command);

    if(result == 256){
        printf("\n---------------------Suggested solutions from Stack overflow---------------------\n");
    }
    

    return 0;
}