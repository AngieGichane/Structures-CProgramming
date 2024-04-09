#ifndef FUNCTION_H
#define FUNCTION_H

struct Refrigerator {
    char model[10];
    float capacity;
    char color[10];
    float price;
};

void displayRefrigerators(struct Refrigerator *refrigeratorsArray, int arraySize);
void printRefrigerators(struct Refrigerator *refrigeratorsArray, int arraySize);

#endif

