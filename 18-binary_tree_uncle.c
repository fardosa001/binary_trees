#include "binary_trees.h"

/**
 * binary_tree_uncle - returns uncle of node
 * @node: pointer to node
 *
 * Return: pointer to uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle_node = NULL, *grandparent;

	if (node == NULL || node->parent == NULL ||
			node->parent->parent == NULL)
	{
		return (NULL);
	}

	grandparent = node->parent->parent;

	if (grandparent->right == NULL || grandparent->left == NULL)
		return (NULL);

	if (node->parent == grandparent->right)
		uncle_node = grandparent->left;
	else
		uncle_node = grandparent->right;

	return (uncle_node);
}
