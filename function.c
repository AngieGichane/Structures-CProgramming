#include <stdio.h>
#include "function.h"
//Function to display the structure array
void displayRefrigerators(struct Refrigerator *refrigeratorsArray, int arraySize) {
    for (int i = 0; i < arraySize; i++) 
    {
        printf("Enter details for Refrigerator %d:\n", i + 1);
        printf("Model: ");
        scanf("%s", refrigeratorsArray[i].model);
        printf("Capacity (litres): ");
        scanf("%f", &refrigeratorsArray[i].capacity);
        printf("Color: ");
        scanf("%s", refrigeratorsArray[i].color);
        printf("Price: ");
        scanf("%f", &refrigeratorsArray[i].price);
    }
}
/*Function to print the structure elements*/
void printRefrigerators(struct Refrigerator *refrigeratorsArray, int arraySize) {
    printf("\nRefrigerator Details:\n");
    for (int i = 0; i < arraySize; i++) 
    {
        printf("Refrigerator %d:\n", i + 1);
        printf("Model: %s\n", refrigeratorsArray[i].model);
        printf("Capacity: %.1f litres\n", refrigeratorsArray[i].capacity);
        printf("Color: %s\n", refrigeratorsArray[i].color);
        printf("Price: $%.2f\n", refrigeratorsArray[i].price);
    }
}

