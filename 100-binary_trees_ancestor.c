#include "binary_trees.h"
/**
 * binary_trees_ancestor - check code
 * @first: 1st nde
 * @second:2nd node
 * Return: tree
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,const binary_tree_t *second)
{
	binary_tree_t *node;

	if (first == NULL)
		return (NULL);
	if (second == NULL)
		return (NULL);
	node = (binary_tree_t *)second;
	while (first)
	{
		while (second != NULL)
		{
			if (first == second)
				return ((binary_tree_t *)first);
			second = second->parent;
		}
		second = node;
		first = first->parent;
	}
	return (NULL);
}
