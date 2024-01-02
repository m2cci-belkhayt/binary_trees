#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_delete - Recursively deletes a binary tree
 * @tree: Pointer to the root node of the binary tree
 *
 * This function recursively deletes a binary tree and frees the allocated memory for each node.
 * It performs a post-order traversal, starting from the leaves and moving towards the root.
 *
 * @tree: Pointer to the root node of the binary tree to be deleted.
 *        If the tree is NULL, the function does nothing.
 */
void binary_tree_delete(binary_tree_t *tree)
{
    if( tree != NULL )
    {
        binary_tree_delete(tree->left);
        binary_tree_delete(tree->right);
        free(tree);
    }
}