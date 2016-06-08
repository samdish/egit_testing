/**
 * @file functions.h

 *
 * @brief This is the header file for the project
 *
 *
 */
#include <stdio.h>
#include <stdbool.h>
#define R 5
#define C 5
/**
 * This function in used in reverse4.c for printing array elements in reverse spiral.
 */
void spiralPrint(int m, int n, int a[R][C]);

/**
 * This function is used in wildcard1.c to compare two strings.
 */
bool match(char *first, char * second);

/*
 * This function is used in wildcard.c to select strings and send them to match() method.
 */
void test(char *first, char *second);


