#include <stdio.h>
#include <stdlib.h>

int reverse_integer(int num)
{
    int reversed = 0;
    while (num != 0) {
        int digit = num % 10; // get the rightmost digit
        reversed = reversed * 10 + digit; // add the digit to the reversed integer
        num /= 10; // remove the rightmost digit from the original integer
    }
    return reversed;
}

int main()
{
    int num = 12345;
    int reversed = reverse_integer(num);
    printf("Reversed integer: %d\n", reversed);
    return 0;
}