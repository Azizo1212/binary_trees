#include "binary_trees.h"

/**
 * binary_tree_depth - Entry point
 * @tree: tree
 * Return: size
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t height = 0;

	if (tree == NULL)
		return (0);
	if (tree->parent != NULL)
		height = binary_tree_depth(tree->parent) + 1;

	return (height);
}
