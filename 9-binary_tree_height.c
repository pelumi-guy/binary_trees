#include "binary_trees.h"

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
