#include "binary_trees.h"

/**
 * binary_trees_ancestor - a function that finds the
 * lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Description:
 * Return: a pointer to the lowest common ancestor node
 * of the two given nodes or NULL if no common ancestor
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *first_parent, *second_parent, *temp;

	if (first == NULL || second == NULL)
		return (NULL);

	if (second->parent == first)
		return ((binary_tree_t *) first);

	if (first->parent == second)
		return ((binary_tree_t *) second);

	first_parent = first->parent;
	second_parent = second->parent;

	temp = first_parent;
	while (temp)
	{
		if (temp == second_parent)
			return (temp);
		temp = temp->parent;
	}

	temp = second_parent;
	while (temp)
	{
		if (temp == first_parent)
			return (temp);
		temp = temp->parent;
	}

	return (NULL);
}
