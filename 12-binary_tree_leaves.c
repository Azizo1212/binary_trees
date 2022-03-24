#include "binary_trees.h"

/**
 * binary_tree_leaves - Entry point
 * @tree: tree
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t size = 0, a = 0;

	if (!tree)
		return (0);
	if (tree->left )
	{
		size ++;
		a = 1;
	}
	if (tree->right)
	{
		size ++;
		a = 1;
	}
	if (a == 0)
	{
		size = 1;
	}

	return (size);
}
