#include "binary_trees.h"

/**
 * binary_tree_balance - a function that measures
 * the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to height balance
 * Description:
 * Return: height of tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height, right_height;
	int bfactor;

	if (!tree)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		bfactor = 0;
	else
	{
		left_height = binary_tree_height(tree->left);
		right_height = binary_tree_height(tree->right);

		if (left_height == 0 && tree->left != NULL)
			left_height = 1;
		if (right_height == 0 && tree->right != NULL)
			right_height = 1;

		bfactor = left_height - right_height;
		/*
		* printf("left_height: %ld\n", left_height);
		* printf("right_height: %ld\n", right_height);
		* printf("bfactor: %d\n", bfactor);
		*/
	}

	return (bfactor);
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
