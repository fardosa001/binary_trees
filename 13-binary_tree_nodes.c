#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a tree
 *
 * @tree: pointer to the root node
 *
 * Return: size_t
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t tree_left, tree_right;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}
	tree_left = binary_tree_nodes(tree->left);
	tree_right = binary_tree_nodes(tree->right);

	return (tree_left + tree_right + 1);
}
