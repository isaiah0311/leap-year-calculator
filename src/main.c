/**
 * \file main.c
 * \author Isaiah Lateer
 * 
 * Calculates if a given year is a leap year or not.
 */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * Entry point for the program. Prompts the user for a year, then calculates if
 * that year is a leap year or not.
 * 
 * \return Exit code.
 */
int main() {
    printf("Enter a year: ");

    unsigned year = 0;
    int result = scanf("%u", &year);
    if (result < 1) {
        fprintf(stderr, "[ERROR] Invalid year.\n");
        return EXIT_FAILURE;
    }

    if (year % 4 || (year % 100 == 0 && year % 400)) {
        printf("%u is NOT a leap year.\n", year);
    } else {
        printf("%u IS a leap year.\n", year);
    }

    return EXIT_SUCCESS;
}
