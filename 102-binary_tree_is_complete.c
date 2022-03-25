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
/**
 * binary_tree_is_complete - checks code
 * @tree: tree
 * Return: 0 and 1
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t left_h, right_h;
	binary_tree_t *left, *right;

	if (tree == NULL)
		return (0);

	if (binary_tree_is_leaf(tree))
		return (1);

	left = tree->left;
	right = tree->right;
	left_h = binary_tree_height(left);
	right_h = binary_tree_height(right);
	if (left_h == right_h)
	{
		if (binary_tree_is_perfect(left) && binary_tree_is_complete(right))
			return (1);
	}
	else if (left_h - 1 == right_h)
	{
		if (binary_tree_is_complete(left) && binary_tree_is_perfect(right))
			return (1);
	}
	return (0);
}
