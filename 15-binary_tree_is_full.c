#include "binary_trees.h"

/**
 * binary_tree_is_full - a function that checks if a binary tree is full
 * @tree: a pointer to the root node of the tree to check
 * Description:
 * Return:	1 if tree is full
 *		0 otherwise
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if ((tree->left == NULL && tree->right != NULL) ||
			(tree->left != NULL && tree->right == NULL))
		return (0);

	return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));
}
