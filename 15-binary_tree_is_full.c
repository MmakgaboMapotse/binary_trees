#include "binary_trees.h"

/**
 * is_full_recursive - Checks if a binary tree is full recursively.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: If tree is not full, 0.
 *         Otherwise, 1.
 *
 * Description: This function checks if a binary tree is full recursively
 *              by traversing the tree and checking if each node has either
 *              two children or no children.
 */
int is_full_recursive(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (1);

	if ((tree->left == NULL && tree->right == NULL) ||
	    (tree->left != NULL && tree->right != NULL &&
	     is_full_recursive(tree->left) && is_full_recursive(tree->right)))
		return (1);

	return (0);
}

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: If tree is NULL or is not full - 0.
 *         Otherwise - 1.
 *
 * Description: This function checks if a binary tree is full by calling
 *              is_full_recursive to perform the recursive check.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (is_full_recursive(tree));
}
