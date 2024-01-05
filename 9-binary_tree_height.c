#include <stdlib.h>
#include "binary_trees.h"
/**
* binary_tree_height - Calculates the height of a binary tree
* Parameters:
* @tree: Pointer to the root node of the binary tree.
* If the tree is NULL, the function does nothing
* Return: Height of the binary tree
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (0);
}

if (tree->left == NULL && tree->right == NULL)
{
return (0);
}

size_t height_left = binary_tree_height(tree->left);
size_t height_right = binary_tree_height(tree->right);

return (((height_left > height_right) ? height_left : height_right) + 1);
}
