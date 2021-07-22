#include "binary_trees.h"
/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: a pointer to the first node
 * @second: a pointer to the second node
 * Return: lowest node
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
binary_tree_t *node;
if (first == NULL || second == NULL)
return (NULL);
node = ((binary_tree_t *)second);
while (first != NULL)
{
while (second)
{
if (first == second)
return ((binary_tree_t *)first);
second = second->parent;
}
second = node;
first = first->parent;
}
return (NULL);
}
