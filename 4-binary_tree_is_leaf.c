#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Checks if a given node is a leaf in a binary tree
 * @node: Pointer to the node to be checked
 *
 * This function determines whether a given node in a binary tree is a leaf or not.
 * A leaf node is one that has no left or right children.
 *
 * @node: Pointer to the node to be checked. If the node is NULL, the function returns 0.
 *
 * Return: 1 if the node is a leaf, 0 otherwise.
 */
int binary_tree_is_leaf(const binary_tree_t *node){
    if (node == NULL)
    {
        return (0);
    }
    
    if (node ->left == NULL && node->right == NULL)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}