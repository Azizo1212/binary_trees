#include "binary_trees.h"

/**
 * binary_tree_delete - Entry point
 * @tree: the tree
 * Return: None
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	if (tree->left != NULL)
		binary_tree_delete(tree->left);
	if (tree->right != NULL)
		binary_tree_delete(tree->right);
	free(tree);
}
