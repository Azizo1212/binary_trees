#include "binary_trees.h"
/**
 * binary_tree_nodes - check code
 * @tree: tree.
 * Return: number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t n;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
		n = binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1;
	else
		n = 0;
	return (n);
}
