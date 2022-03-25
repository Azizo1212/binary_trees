#include "binary_trees.h"
/**
 * _height_t - check code
 * @tree: tree.
 * Return: number of nodes
 */
size_t _height_t(const binary_tree_t *tree)
{
	size_t l, r;

	if (!tree)
		return (0);

	if (tree)
	{
		r = _height_t(tree->right);
		l = _height_t(tree->left);
	}
	if (r <= l)
		return (l + 1);
	return (r + 1);
}

/**
 * binary_tree_balance - chec
 * @tree: tree
 * Return: 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{

	if (!tree)
		return (0);
	return (_height_t(tree->left) - _height_t(tree->right));
}
