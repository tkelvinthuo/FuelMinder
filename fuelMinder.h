#ifndef FUELMINDER_H
#define FUELMINDER_H

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

void getFlt(const char *prompt, float *value_input);
void getStr(const char *prompt, char *str_input, int max_len);
void strtrim(char *str);

#endif /* KELVIN */
