#include "binary_trees.h"

/**
 * binary_tree_height - Entry point
 * @tree: tree
 * Return: height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0, left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	if (tree != NULL)
	{
		left_height = binary_tree_height(tree->left) + 1;
		right_height = binary_tree_height(tree->right) + 1;
		if (left_height >= right_height)
			height = left_height;
		else
			height = right_height;
	}

	return (height);
}
