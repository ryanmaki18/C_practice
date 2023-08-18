#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void IssueLengthError() {
    printf("The string provided is too long. Only strings between 1 and 15 are allowed\n");
    exit(EXIT_FAILURE);
}

int DecimalNumericalPlace(char romanSymbolValue) {
    switch(romanSymbolValue){
        case 'M':
            return 1000;
        case 'D':
            return 500;
        case 'C':
            return 100;
        case 'L':
            return 50;
        case 'X':
            return 10;
        case 'V':
            return 5;
        case 'I':
            return 1;
        default:
            return 0;
            
    }
}

int romanToInt(char * s) {
    int len = strlen(s);
    int sum = 0;
    if (len > 15){
        IssueLengthError();
    }
    if (len < 1){
        return sum;
    }
    while (*s != '\0'){
        if(DecimalNumericalPlace(*s) < DecimalNumericalPlace(*(s+1))){
            sum = sum - DecimalNumericalPlace(*s);
        } else {
            sum += DecimalNumericalPlace(*s);
        }
        s++;
    }
    return sum;
}

int main(int argc, char *argv[]){
    if (argc != 2) {
        printf("Usage: %s <roman numeral string>\n", argv[0]);
        return EXIT_FAILURE;
    }

    char *romanNumeral = argv[1];
    //printf("Input: %s\n", romanNumeral); // add this line
    int result = romanToInt(romanNumeral);
    //printf("Result: %d\n", result); // add this line
    
    printf("%s = %d\n", romanNumeral, result);

    return EXIT_SUCCESS;
}
