#include "binary_trees.h"
/**
 * binary_tree_insert_left -  inserts a node as the left-child of another node
 * @parent: root node of the tree
 * @value: the value in the root note
 * Return: binary tree or NULL on fail
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t  *temp, *current;
temp = malloc(sizeof(binary_tree_t));
if (temp == NULL)
return (NULL);
current = temp;
parent = NULL;
while (1)
{
parent = current;
/* go to left */
if (value < parent->n)
current = current->left;
/* insert to left */
if (current == NULL)
parent->left = temp;
return (temp);
}
}
