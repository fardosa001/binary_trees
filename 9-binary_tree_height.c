#include "binary_trees.h"

/**
 *  binary_tree_height - measures the height of a binary tree
 *  @tree: pointer to the root node of the tree to measure the height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t rightHeight, leftHeight;

	if (tree == NULL)
		return (0);

	/* Recursively calculate the height of the left and right subtrees*/
	rightHeight = binary_tree_height(tree->right);
	leftHeight = binary_tree_height(tree->left);

	if (rightHeight > leftHeight)
		return (rightHeight +1);
	else
		return (leftHeight + 1);
}
