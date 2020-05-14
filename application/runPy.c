#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[]){
    FILE *pFile = NULL;
    char name[] = "errorResponse.txt";
    char *filename = "errorResponse.txt";
    pFile = fopen(filename, "w+");
    
    char command[] = {"python3 "};
    strcat(command, argv[1]);
    strcat(command, " > ");
    printf("%s\n", command);
    strcat(command, filename);
    printf("%s\n", command);
    int result = system(command);

    if(result % 256==0){
            printf("\n---------------------Suggested solutions from Stack overflow---------------------\n");
    }

    fclose(pFile);
    return 0;
}