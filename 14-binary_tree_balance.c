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
size_t height_left;
size_t height_right;
if (tree == NULL)
{
return (0);
}

if (tree->left == NULL && tree->right == NULL)
{
return (0);
}

height_left = binary_tree_height(tree->left);
height_right = binary_tree_height(tree->right);

return (((height_left > height_right) ? height_left : height_right) +1);
}
/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance factor
 *
 * Return: Balance factor of the binary tree, 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
size_t height_left, height_right;
if (tree == NULL)
{
return (0);
}

height_left = binary_tree_height(tree->left);
height_right = binary_tree_height(tree->right);

return ((int)(height_left - height_right));
}
