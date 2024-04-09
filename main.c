#include <stdio.h>
#include "function.h"

int main() {
    int arraySize = 10;
    struct Refrigerator refrigeratorsArray[arraySize];
    displayRefrigerators(refrigeratorsArray, arraySize);
    /*print the structure elements*/
    printRefrigerators(refrigeratorsArray, arraySize);
    return 0;
}

