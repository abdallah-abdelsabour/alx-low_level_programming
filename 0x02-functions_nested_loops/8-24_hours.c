#include "main.h"

/**
 * print_alphabet print alpha from a -> z
 * Return: void value
 */
void jack_bauer(void) {
    int hour, minute;

    for (hour = 0; hour < 24; hour++) {
        for (minute = 0; minute < 60; minute++) {
            // Print the hour (0-23) and minute (00-59) in the desired format
            putchar((hour / 10) + '0'); // Print the tens digit of the hour
            putchar((hour % 10) + '0'); // Print the ones digit of the hour
            putchar(':');               // Print the colon separator
            putchar((minute / 10) + '0'); // Print the tens digit of the minute
            putchar((minute % 10) + '0'); // Print the ones digit of the minute
            putchar('\n');              // Print a newline character to move to the next line
        }
    }
}
