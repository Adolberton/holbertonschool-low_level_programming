#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - Prints a string in reverse
 * @dest: The string to print
 * @src: sqdjfq
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
        char *start = dest;

        while (*src != '\0')
        {
                *dest = *src;
                dest++;
                src++;
        }
        *dest = '\0';
        return (start);
}
