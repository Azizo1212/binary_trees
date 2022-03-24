#include "binary_trees.h"

/**
 * binary_tree_is_root - Entry point
 * @node: entry node to check
 * Return: Always 1 (Success) 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	else
		return (1);
}
