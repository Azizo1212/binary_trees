#include "binary_trees.h"
/**
 * binary_tree_is_full - check code
 * @tree: tree.
 * Return: number of nodes
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int l, r;

	if (!tree)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree)
	{
		l = binary_tree_is_full(tree->left);
		r = binary_tree_is_full(tree->right);
	}
		return (l && r);
}