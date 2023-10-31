#include "binary_trees.h"
#include <stdlib.h>

/**
  * binary_tree_is_leaf - checks if a node is a leaf
  * @node: pointer to the node to check
  * Return: 1 if node is a leaf, otherwise 0
  */
int binary_tree_is_leaf(const binary_tree_t *node)
{

	if (node == NULL)
		return (0);

	/* A node is a leaf if it has no left or right child */

	if (node->right == NULL && node->left == NULL)
		return (1);

	else
		return (0);

}
