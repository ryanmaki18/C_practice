/* Binary Search vs regular search */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


// Regular Search
//      Is O(n)
bool contains (int theArray[], long size, int value){
    long i;

    for (i = 0; i < size; i++){
        if (theArray[i] == value){
            return true;
        }
    }
    return false;
}


//Binary Search
//      Is O(log(n))
bool binaryContains (int theArray[], long size, int value){
    long lBound, uBound = (size - 1), midPoint;

    while (lBound <= uBound){
        midPoint = lBound + ((uBound - lBound) / 2);
        if (theArray[midPoint] == value)
            return true;
        if (theArray[midPoint] < value){
            lBound = midPoint + 1;
        } else {
            uBound = midPoint - 1;
        }
    }
    return false;
}


