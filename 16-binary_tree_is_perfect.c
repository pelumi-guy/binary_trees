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

/**
 * binary_tree_height - a function that measures
 * the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Description:
 * Return: height of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height, height;

	if (!tree)
		return (0);

	if (!tree->left)
		left_height = 0;
	else
		left_height = 1 + binary_tree_height(tree->left);

	if (!tree->right)
		right_height = 0;
	else
		right_height = 1 + binary_tree_height(tree->right);

	height = left_height > right_height ? left_height : right_height;

	return (height);
}

/**
 * binary_tree_size - a function that measures
 * the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Description:
 * Return: size of tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size, right_size, size;

	if (!tree)
		return (0);

	if (!tree->left)
		left_size = 0;
	else
		left_size = binary_tree_size(tree->left);

	if (!tree->right)
		right_size = 0;
	else
		right_size = binary_tree_size(tree->right);

	size = left_size + right_size + 1;

	return (size);
}
