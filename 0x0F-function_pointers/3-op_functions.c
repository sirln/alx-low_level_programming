#include "3-calc.h"
/**
  *op_add - adds 2 numbers
  *
  *@a
  *@b
  *
  *Return: sum of the numbers
  *
  */


int op_add(int a, int b)
{
	return (SUM(a, b));
}

/**
  *op_sub - subtracts 2 numbers
  *
  *@a
  *@b
  *
  *Return: difference of the numbers
  *
  */
int op_sub(int a, int b)
{
	return (DIFF(a, b));
}

/**
  *op_mul - multiples 2 numbers
  *
  *@a
  *@b
  *
  *Return: product of the numbers
  *
  */
int op_mul(int a, int b)
{
	return (PROD(a, b));
}

/**
  *op_div - divides 2 numbers
  *
  *@a
  *@b
  *
  *Return: division of the numbers
  *
  */
int op_div(int a, int b)
{
	return (DIV(a, b));
}

/**
  *op_mod - get the modulus of 2 numbers
  *
  *@a
  *@b
  *
  *Return: modulus of the numbers
  *
  */
int op_mod(int a, int b)
{
	return (MOD(a, b));
}
