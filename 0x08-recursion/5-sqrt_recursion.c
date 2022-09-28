#include "main.h"
#include <stdio.h>
/**
 * find_sqrt - function to find the squareroot of a number
 * @num: number
 * @root: root to be tested
 * Return: -1 or squareroot
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);
	if (root == num / 2)
		return (-1);
	return (find_sqrt(num, root + 1));
}
/**
 * _sqrt_recursion - function to print natural square roots
 * @n: number
 * Return: -1 or square root if number is valid
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (find_sqrt(n, root));
}
