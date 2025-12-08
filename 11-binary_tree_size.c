#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: Pointer to the root of the tree
 *
 * Return: Size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t pourUnTest = 0;

	if (tree == NULL)
	{
		return (0);
	}

	pourUnTest = binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1;

	return (pourUnTest);
}
