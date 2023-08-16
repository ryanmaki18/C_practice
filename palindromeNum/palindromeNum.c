#include <stdio.h> 
#include <stdlib.h>
#include <stdbool.h>



bool isPalindrome(int x) {
    if (x < 0 || (x != 0 && x % 10 == 0)) {
        return false;
    }

    int reversedNum = 0;
    while (x > reversedNum) {
        reversedNum = reversedNum * 10 + (x % 10);
        x /= 10;
    }

    if (x == reversedNum || x == reversedNum / 10){
        return true;
    }
    return false;
}





/*
int numDigits(int x) {
    if (x < 10) {
        return 1;
    }
    return 1 + numDigits(x / 10);
}

bool isPalindrome(int x){
    int isPalindrome = false;
    char *reversedInt = malloc((numDigits(x) + 1) * sizeof(int));
    itoa(x, reversedInt);

    for (int i = (numDigits(x) - 1); i < 0; i--){
        reversedInt = x[i];
    }
    if (strcmp(x, reversedInt)){
        isPalindrome = true
    }
    return isPalindrome;
    
}
*/

