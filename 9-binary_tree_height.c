#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 *
 * Description: This function calculates the height of a binary tree
 *              recursively by finding the maximum height of the left
 *              and right subtrees and adding 1 to the maximum.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t left_height = 0, right_height = 0;

	if (tree->left)
		left_height = binary_tree_height(tree->left);
	if (tree->right)
		right_height = binary_tree_height(tree->right);

	return (1 + (left_height > right_height ? left_height : right_height));
}
