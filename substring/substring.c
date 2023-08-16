#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int substring(const char *whole, const char *sub) {
    int len1 = strlen(whole);
    int len2 = strlen(sub);

    for (int i = 0; i <= len1 - len2; i++) {
        int j = 0;
        for (j = 0; j < len2; j++) {
            if (whole[i + j] != sub[j]) {
                break;
            }
        }
        if (j == len2) {
            return i;
        }
    }
    return EXIT_FAILURE; // If substring is not found
}


int main() {
    char *s = "helloworld";
    char *s2 = "world";
    int index = substring(s, s2);
    printf("%d\n", index); // prints '5'
    return EXIT_SUCCESS;
}