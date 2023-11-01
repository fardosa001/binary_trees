#include "binary_trees.h"

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
		return (1);

	left_Height = binary_tree_height(tree->left);
	right_Height = binary_tree_height(tree->right);

	if (left_Height > right_Height)
		return (left_Height + 1);
	else
		return (right_Height + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 *
 * @tree: pointer to the root node of the tree
 *
 * Return: int
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (left_height - right_height);
}
