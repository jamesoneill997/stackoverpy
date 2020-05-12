#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "../http/get.h"

char * getLinks(char file[]); 

int main(){
    getHTML("https://google.com/");
    FILE *pFile;
    char *fn = "../http/output.html";
    pFile = fopen(fn, "r");



    return 0;
}


char * getlinks(char file[]){

}