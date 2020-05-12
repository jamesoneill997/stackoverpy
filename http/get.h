#include<stdio.h>
#include<string.h>
#include<curl/curl.h>

void getHTML(char url[]){
    CURL *curl;
    FILE *fp;
    int result;
    char dest[20] = "output.html";
    
    fp = fopen(dest, "wb");

    curl = curl_easy_init();
    curl_easy_setopt(curl, CURLOPT_URL, url);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, fp);
    curl_easy_setopt(curl,CURLOPT_FAILONERROR, 1L);

    result = curl_easy_perform(curl);

    if(result != CURLE_OK){
        printf("Unsuccessful");
    }

    fclose(fp);

    curl_easy_cleanup(curl);
}