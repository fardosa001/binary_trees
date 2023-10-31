#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_t *binary_tree_insert_right - inserts a node as the right-child
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: a pointer to the created node or NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *insertRight;

	if (parent == NULL)
	return (NULL);

	insertRight = binary_tree_node(parent, value);
	if (insertRight == NULL)
	return (NULL);

	if (parent->right != NULL)
	{
		insertRight->right = parent->right;
		insertRight->right->parent = insertRight;
	}

	parent->right = insertRight;

	return (insertRight);
}
