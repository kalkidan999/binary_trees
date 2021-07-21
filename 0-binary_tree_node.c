#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: is the value to put in the new node
 * Return: Always 0 (Success)
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *tempnode;
temp = malloc(sizeof(binary_tree_t));
/*if tree is empty create root node */
if (tempnode == NULL)
{
return NULL;
}
tempnode->parent = parent;
tempnode->n = value;
tempnode->left = left;
tempnode->right = right;
return (tempnode);
}
