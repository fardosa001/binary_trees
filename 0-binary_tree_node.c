#include "binary_trees.h"

/**
 * binary_tree_node - Create a binary tree node
 *
 * @parent: pointer to the parent node
 * @value: data to be put in new node
 *
 * Return: pointer of new node or null if failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;

	if (parent == NULL)
	{
		newNode->parent = newNode;
		return (newNode);
	}

	newNode->parent = parent;
	return (newNode);
}
