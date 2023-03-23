#ifndef  _MAIN_HEADER_FILE
#define _MAIN_HEADER_FILE_


int _putchar(char c);
/**
  * print_characters - function to print characters
  *
  */

void print_alphabet(void);
/**
  * prints the alphabet, in lowercase, followed by a new line.
  *
  */

void print_alphabet_x10(void);
/**
  * prints 10 times the alphabet, in lowercase, followed by a new line.
  *
  */

int _islower(int c);
/**
  * checks for lowercase character.
  *
  */

int _isalpha(int c);
/**
  * checks for alphabetic character.
  *
  */

int print_sign(int n);
/**
  *  prints the sign of a number.
  *
  */

int _abs(int);
/**
  *  computes the absolute value of an integer.
  *
  */

int print_last_digit(int);
/**
  *  prints the last digit of a number.
  *
  */

void jack_bauer(void);
/**
  * prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
  *
  */

void times_table(void);
/**
  * prints the 9 times table, starting with 0.
  *
  */

int add(int, int);
/**
  * adds two integers and returns the result.
  *
  */

void print_to_98(int n);
/**
  * prints all natural numbers from n to 98, followed by a new line.
  *
  */

void print_times_table(int n);
/**
  * prints the n times table, starting with 0.
  *
  */

int _isupper(int c);
/**
  * function that checks for uppercase character.
  *
  */

int _isdigit(int c);
/**
  * function that checks for a digit (0 through 9).
  *
  */

int mul(int a, int b);
/**
  * function that multiplies two integers.
  *
  */

void print_numbers(void);
/**
  * function that prints the numbers, from 0 to 9, followed by a new line.
  *
  */

void print_most_numbers(void);
/**
  * function that prints the numbers, from 0 to 9, followed by a new line.
  * Does not print 2 and 4
  */

void more_numbers(void);
/**
  * function that prints 10 times the numbers, from 0 to 14, followed by a new line.
  *
  */

void print_line(int n);
/**
  * function that draws a straight line in the terminal n times.
  *
  */

void print_diagonal(int n);
/**
  * function that draws a diagonal line on the terminal.
  *
  */

void print_square(int size);
/**
  * function that prints a square, followed by a new line.
  * size is the size of the square
  */

void print_triangle(int size);
/**
  * function that prints a triangle, followed by a new line.
  * size is the size of the triangle
  */

#endif
