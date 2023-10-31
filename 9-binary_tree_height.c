#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: height of binary treee
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_Height, left_Height;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left_Height = binary_tree_height(tree->left);
	right_Height = binary_tree_height(tree->right);

	if (left_Height > right_Height)
		return (left_Height + 1);
	else
		return (right_Height + 1);
}
