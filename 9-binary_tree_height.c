#include <stdlib.h>
#include "binary_trees.h"
/*
* Function: max
 * Description: Returns the maximum of two values.
 * Parameters:
 *   a - First value
 *   b - Second value
 * Return: Maximum of a and b
*/
size_t max(size_t a, size_t b)
{
    return ((a > b) ? a : b);
}

/*
*Function: binary_tree_height
 * Description: Calculates the height of a binary tree.
 * Parameters:
 *   tree - Pointer to the root of the binary tree
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

    return (max(height_left, height_right) + 1);
}