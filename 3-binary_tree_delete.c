#include "binary_trees.h"

/**
 * inorderTraversal - delete subtrees and leafs
 *
 * @tree: pointer to root node
 */
void inorderTraversal(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	inorderTraversal(tree->left);
	inorderTraversal(tree->right);
	free(tree);
}


/**
 * binary_tree_delete - Deletes an entire binary tree
 *
 * @tree: pointer to root node
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	inorderTraversal(tree);
}
