#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Entry point
 * @node: node
 * Return: 1 if leaf 0 if not
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->right != NULL || node->left != NULL)
		return (0);
	else
		return (1);
}
