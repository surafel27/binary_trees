#include "binary_trees.h"

/**
 * binary_tree_is_full - function that checks if a binary tree is full
 *	binary tree
 *
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if binary tree is full, otherwise 0
 */

/*
 * Pseudocode
 * 1. Traverse all nodes
 * 2.	Check if both left and right node are leaf
 * 3.   if not
 * 4.		Check if both left and right node have children
 * 5.			Recursive to step 1
 * 6.		If not
 * 7.			tree is not full
 */

int binary_tree_is_full(
	__attribute__((unused))  const binary_tree_t *tree
)
{
	int is_full = 1;

	if (tree) /* Check: tree is not NULL */
	{
		if (binary_tree_is_leaf(tree))
		{
			/* Traverse all nodes */
			is_full = binary_tree_is_full(tree->left);
			is_full = binary_tree_is_full(tree->right);
		}
		else
		{
			if (tree->left && tree->right)
			{
				/* Traverse all nodes */
				is_full = binary_tree_is_full(tree->left);
				is_full = binary_tree_is_full(tree->right);
			}
			else
			{
				is_full = 0;
			}
		}
	}

	return (is_full);
}
