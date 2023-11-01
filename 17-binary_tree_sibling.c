#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node
 *
 * @node: pointer to the node to find the sibling
 *
 * Return: pointer to sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *child_node;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	if ((node->parent->left != NULL && node->parent->right != NULL))
	{
		if (node->parent->left != node)
			child_node = node->parent->left;
		else
			child_node = node->parent->right;
	}
	return (child_node);
}
