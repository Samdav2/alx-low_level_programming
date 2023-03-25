#ifndef __FUNCTION_POINTERS_H__
#define __FUNCTION_POINTERS_H__

#include <stdio.h>
#include <stdlib.h>

void print_name(char *name, void (*f)(char *));

#endif
