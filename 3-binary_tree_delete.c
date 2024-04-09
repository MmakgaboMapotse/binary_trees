#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_delete - Deletes a binary tree.
 * @tree: A pointer to the root node of the tree to delete.
 *
 * Description: This function deletes a binary tree by recursively
 * freeing each node, starting from the leaves and working its way up
 * to the root.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
