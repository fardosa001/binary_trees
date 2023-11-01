#include "binary_trees.h"

/**
 * depth - returns depth of tree
 *
 * @tree: pointer to tree
 *
 * Return: int
 */
int depth(const binary_tree_t *tree)
{
	int l = 0;

	while (tree != NULL)
	{
		l++;
		tree = tree->left;
	}
	return (l);
}

/**
 * perfect - checks if tree is perfect
 * @tree: pointer to tree
 * @dep: depth of tree
 * @l: int
 *
 * Return: int
 */
int perfect(const binary_tree_t *tree, int dep, int l)
{
	if (tree->left == NULL && tree->right == NULL)
		return (dep == l + 1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (perfect(tree->left, dep, l + 1) &&
			perfect(tree->right, dep, l + 1));
}

/**
 * binary_tree_is_perfect - Checks if binary tree is perfect
 *
 * @tree: pointer to tree
 *
 * Return: int
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int dep;

	if (tree == NULL)
		return (0);

	dep = depth(tree);

	return (perfect(tree, dep, 0));
}
