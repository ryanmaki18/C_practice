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

int main(){
    char s[] = "Hello World";
    int length = my_strlen(s);
    printf("Length of s = %d\n", length);
}