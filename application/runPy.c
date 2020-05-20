#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){

    FILE *fp;
    int status;
    //file setup
    char name[] = "test.py";
    char command[] = "python3 ";

    strcat(command, name);

    printf("%s\n",command);

    fp = popen(command, "w");
    
    pclose(fp);

    return 0;
}










    
