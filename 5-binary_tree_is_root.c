#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a given node is the root of a binary tree
 * @node: Pointer to the node to be checked
 *
 * This function determines whether a given node in a binary tree is the root or not.
 * The root node is the one that has no parent.
 *
 * @node: Pointer to the node to be checked. If the node is NULL, the function returns 0.
 *
 * Return: 1 if the node is the root, 0 otherwise.
 */


int binary_tree_is_root(const binary_tree_t *node)
{
    if (node == NULL)
    {
        return (0);
    }
    
    if (node ->parent == NULL)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}