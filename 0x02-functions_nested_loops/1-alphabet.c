#include "main.h"


/**
 * print_alphabet - print all alphabet in lowercase because we specify it from
 * a - > z
 */


void print_alphabet(void)
{
        char letter;


        for (letter = 'a'; letter <= 'z'; letter++)
                _putchar(letter);


        _putchar('\n');
}
