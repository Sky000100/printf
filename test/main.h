#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

void simple_printf(const char *format, ...);
void simplified_converter(unsigned int u_value, unsigned int o_value,
                          unsigned int x_value, unsigned int X_value);
void custom_printf(const char *format, ...);
void printPlusFlag(int num);
void printSpaceFlag(int num);
void printHashFlag(int hex);
void printFloatHashFlag(double dbl);
void printIntWithFieldWidth(int num, int width);
void printDoubleWithFieldWidth(double dbl, int width);
void printHexWithFieldWidth(unsigned int hex, int width);
void printIntWithZeroPadding(int num, int width);
void printDoubleWithZeroPadding(double dbl, int width);
void printHexWithZeroPadding(unsigned int hex, int width);

#endif

