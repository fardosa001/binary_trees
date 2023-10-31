#include "binary_trees.h"

/**
 * postorderTraversal - delete subtrees and leafs
 *
 * @tree: pointer to root node
 */
void postorderTraversal(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	postorderTraversal(tree->left);
	postorderTraversal(tree->right);
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
	postorderTraversal(tree);
}
