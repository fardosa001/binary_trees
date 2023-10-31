#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_t *binary_tree_insert_left - inserts a node as the left_child
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: a pointer to the created node or NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *insertLeft;

	if (parent == NULL)
		return (NULL);

	insertLeft = binary_tree_node(parent, value);
	if (insertLeft == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		insertLeft->left = parent->left;
		insertLeft->left->parent = insertLeft;
	}

	parent->left = insertLeft;

	return (insertLeft);
}


