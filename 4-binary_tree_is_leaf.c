#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: a pointer to the node to check
 * Return: binary tree or NULL on fail
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node == NULL)
return (0);
if (node != node->parent)
{
/* first delete both subtrees */
return (1);
}
else
{
return (0);
}
}
