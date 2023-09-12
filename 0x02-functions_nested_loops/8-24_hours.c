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
            _putchar((hour / 10) + '0'); // Print the tens digit of the hour
            _putchar((hour % 10) + '0'); // Print the ones digit of the hour
            _putchar(':');               // Print the colon separator
            _putchar((minute / 10) + '0'); // Print the tens digit of the minute
            _putchar((minute % 10) + '0'); // Print the ones digit of the minute
            _putchar('\n');              // Print a newline character to move to the next line
        }
    }
}
