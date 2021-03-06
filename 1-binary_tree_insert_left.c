#include "binary_trees.h"

/**
 * binary_tree_insert_left - Entry point
 * @parent: parent
 * @value: value
 * Return: node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (parent == NULL)
		return (NULL);
	node = binary_tree_node(parent, value);
	if (node == NULL)
		return (NULL);
	node->left = parent->left;
	if (parent->left != NULL)
		node->left->parent = node;
	parent->left = node;
	return (node);
}
