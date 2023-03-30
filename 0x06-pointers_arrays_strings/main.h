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

void print_number(int n);
/**
  * function that prints an integer.
  *
  */

void reset_to_98(int *n);
/**
  * function that takes a pointer to an `int` as parameter and updates the value it points to to `98`.
  *
  */

void swap_int(int *a, int *b);
/**
  * function that swaps the values of two integers.
  *
  */

int _strlen(char *s);
/**
  * function that returns the length of a string.
  *
  */

void _puts(char *str);
/**
  * function that prints a string, followed by a new line, to stdout.
  *
  */

void print_rev(char *s);
/**
  * function that prints a string, in reverse, followed by a new line.
  *
  */

void rev_string(char *s);
/**
  * function that reverses a string.
  *
  */

void puts2(char *str);
/**
  * function that prints every other character of a string,
  * starting with the first character, followed by a new line.
  *
  */

void puts_half(char *str);
/**
  * function that prints half of a string, followed by a new line.
  *
  */

void print_array(int *a, int n);
/**
  * function that prints n elements of an array of integers, followed by a new line.
  *
  */

char *_strcpy(char *dest, char *src);
/**
  * function that copies the string pointed to by src,
  * including the terminating null byte (\0), to the buffer pointed to by dest.
  * Return value: the pointer to dest
  */

int _atoi(char *s);
/**
  * function that convert a string to an integer.
  * number in the string can be preceded by an infinite number of characters
  * take into account all the - and + signs before the number
  * If there are no numbers in the string, the function must return 0
  */

char *_strcat(char *dest, char *src);
/**
  * function that concatenates two strings.
  *
  */

char *_strncat(char *dest, char *src, int n);
/**
  * function that concatenates two strings.
  * similar to the _strcat function, except that
  * it will use at most `n` bytes from `src`; and
  * src does not need to be null-terminated
  * if it contains `n` or more bytes
  */

char *_strncpy(char *dest, char *src, int n);
/**
  * function that copies a string.
  *
  */

int _strcmp(char *s1, char *s2);
/**
  * function that compares two strings.
  *
  */

void reverse_array(int *a, int n);
/**
  * function that reverses the content of an array of integers.
  *
  */

char *string_toupper(char *);
/**
  * function that changes all lowercase letter of a string to uppercase
  *
  */

char *cap_string(char *);
/**
  * function that capitalizes all words of a string
  * separators of words: `space`, `tabulation`, `new line`, `,`,`;`,
  *			`.`, `!`, `?`, `"`, `(`, `)`, `{`, and `}`
  */

char *leet(char *);
/**
  * function that encodes a string into 1337.
  * Letters a and A should be replaced by 4
  * Letters e and E should be replaced by 3
  * Letters o and O should be replaced by 0
  * Letters t and T should be replaced by 7
  * Letters l and L should be replaced by 1
  * Prototype: char *leet(char *);
  * You can only use one if in your code
  * You can only use two loops in your code
  * You are not allowed to use switch
  * You are not allowed to use any ternary operation
  */

char *rot13(char *);
/**
  *function that encodes a string using rot13.
 * Prototype: char *rot13(char *);
 * You can only use if statement once in your code
 * You can only use two loops in your code
 * You are not allowed to use switch
 * You are not allowed to use any ternary operation
 */

void print_number(int n);
/**
  * function that prints an integer.
  * Prototype: void print_number(int n);
  * You can only use _putchar function to print
  * You are not allowed to use long
  * You are not allowed to use arrays or pointers
  * You are not allowed to hard-code special values
  */

char *infinite_add(char *n1, char *n2, char *r, int size_r);
/**
  *function that adds two numbers.
  * Prototype: char *infinite_add(char *n1, char *n2, char *r, int size_r);
  * Where n1 and n2 are the two numbers
  * r is the buffer that the function will use to store the result
  * size_r is the buffer size
  * The function returns a pointer to the result
  * You can assume that you will always get positive numbers, or 0
  * You can assume that there will be only digits in the strings n1 and n2
  * n1 and n2 will never be empty
  * If the result can not be stored in r the function must return 0
  */




void print_buffer(char *b, int size);
/**
  *function that prints a buffer.
  * Prototype: void print_buffer(char *b, int size);
  * The function must print the content of size bytes of the buffer pointed by b
  * The output should print 10 bytes per line
  * Each line starts with the position of the first byte of the line in hexadecimal (8 chars), starting with 0
  * Each line shows the hexadecimal content (2 chars) of the buffer, 2 bytes at a time, separated by a space
  * Each line shows the content of the buffer. If the byte is a printable character, print the letter, if not, print .
  * Each line ends with a new line \n
  * If size is 0 or less, the output should be a new line only \n
  * You are allowed to use the standard library
  * The output should look like the following example, and formatted exactly the same way:
  */

#endif
