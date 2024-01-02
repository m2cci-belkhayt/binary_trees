#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right child of another node
 * @parent: Pointer to the parent node
 * @value: Value to put in the new node
 *
 * Return: A pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    if (parent == NULL)
        return (NULL);

    binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

    if (new_node == NULL)
        return (NULL);

    new_node->n = value;
    new_node->parent = parent;
    new_node->left = NULL;
    new_node->right = NULL;

    if (parent->left == NULL)
    {
        parent->left = new_node;
    }
    else
    {
        new_node->left = parent->left;
        parent->left->parent = new_node;
        parent->left = new_node;
    }

    return (new_node);
}


