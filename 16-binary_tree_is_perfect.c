#include "binary_trees.h"

/**
 * power - function that computes the exponent of a number
 * @a: number to be raised to power
 * @b: power
 * Return: exponent
 **/
int power(int a, int b)
{
	int i, res = a;

	if (b == 0)
		return (1);
	for (i = 1; i < b; i++)
		res *= a;

	return (res);
}

/**
 * binary_tree_is_perfect - a function that checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 * Description:
 * Return:	1 if tree is perfect
 *		0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t tree_size, perfect_size;

	tree_size = binary_tree_size(tree);

	perfect_size = power(2, (binary_tree_height(tree) + 1)) - 1;

	if (tree_size == perfect_size)
		return (1);
	else
		return (0);
}


