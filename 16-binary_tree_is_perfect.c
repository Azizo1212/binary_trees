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
 * binary_tree_is_perfect(const binary_tree_t *tree)
 * @tree: terss
 * Return: 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);

	if (_height_t(tree->left) == _height_t(tree->right))
	{
		left = binary_tree_is_perfect(tree->left);
		right = binary_tree_is_perfect(tree->right);
		if (left == right)
			return (1);
	}
	return (0);
}
