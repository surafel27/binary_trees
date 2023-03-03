#include "binary_trees.h"

/**
 * binary_tree_leaves -  counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number
 * Return: the number of leaves, or 0 if tree is NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count;
	size_t left;
	size_t right;

	if (tree == NULL)
		return (0);
	if (!(tree->left) && !(tree->right))
		return (1);

	right = binary_tree_leaves(tree->left);
	left = binary_tree_leaves(tree->right);
	count = right + left;
	return (count);
}
