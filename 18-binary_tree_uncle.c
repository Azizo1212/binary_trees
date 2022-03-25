#include "binary_trees.h"

/**
 * binary_tree_sibling - check code.
 * @node: node.
 * Return: lml,ml,ml,
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}

/**
 * binary_tree_uncle - check code.
 * @node: point
 * Return: jnk:jnkjbk.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle = NULL;

	if (!node)
		return (NULL);

	uncle = binary_tree_sibling(node->parent);
	return (uncle);
}
