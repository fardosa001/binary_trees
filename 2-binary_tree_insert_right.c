#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the left child of another node
 *
 * @parent: pointer node to insert the left child
 * @value: value to store in the new node
 *
 * Return: pointer to new node or NULL if failed
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);

	newNode = binary_tree_node(parent, value);
	if (newNode == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		newNode->right = parent->right;
		newNode->right->parent = newNode;
	}

	parent->right = newNode;
	return (newNode);
}
