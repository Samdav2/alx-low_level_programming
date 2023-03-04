#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <stddef.h>
/**
 * This file contain all the prototype of the c function files in the directory
 */
int main();
int _putchar(char c);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *str, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *n);

#endif
