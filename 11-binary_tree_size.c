#include "binary_trees.h"

/**
 * binary_tree_size - Entry point
 * @tree: tree
 * Return: size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	if (tree == NULL)
		return (0);
	size = binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1;
	return (size);
}
