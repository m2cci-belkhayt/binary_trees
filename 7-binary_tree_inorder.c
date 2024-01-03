#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_preorder - Traverses a binary tree using preorder traversal
 * @tree: Pointer to the root node of the binary tree
 * @func: Pointer to a function to be applied to each node's data
 *
 * This function traverses a binary tree
 * in a preorder manner, applying the provided
 * function to the data of each
 * visited node. The traversal starts from the root
 * and goes recursively to the left
 * subtree before the right subtree.
 *
 * @tree: Pointer to the root node of the binary tree.
 * If the tree is NULL, the function does nothing.
 * @func: Pointer to a function taking an int
 *        parameter and returning void.
 *        This function is applied to the data
 *        of each visited node during the traversal.
 *        If func is NULL, the function does nothing.
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL)
    return;

    binary_tree_inorder(tree->left, func);
    func(tree->n);
    binary_tree_inorder(tree->right, func);
}
