/* THIS QUESTION WAS ON MIDTERM */

#include <stdio.h>
#include <stdlib.h>

int my_strlen(char *src){
    int totalLength = 0;
    while(*src != '\0'){
        totalLength++;
        src++;
    }
    return totalLength;
}

void myStrCopy(char *src, char * dest){
    while(*src != '\0'){
        *dest = *src;
        dest++;
        src++;
    }
    //*dest = '\0';
    

    /*
    int strLength = my_strlen(src);

    for(int i = 0; i < (strLength + 1); i++){
        dest[i] = src[i];
    }
    */
}

int main(){
    char s[] = "Hello World";
    char d[12];
    myStrCopy(s, d);
    printf("s = %s\nd = %s\n", s, d);
}