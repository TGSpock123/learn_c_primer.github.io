#ifndef _TREE_H
#define _TREE_H
#include <stdbool.h>

#define SLEN 20

typedef struct item_proto
{
  char petname[SLEN];
  char petkind[SLEN];
}item;

#define MAXITEMS 10

typedef struct tree_node_proto
{
  struct tree_node_proto * left;
  item item;
  struct tree_node_proto * right;
}tree_node;

typedef struct tree_proto
{
  tree_node * root;
  int size;
}tree;

void init_tree (tree * pt_tree);
bool if_tree_empty (const tree * pt_tree);
bool if_tree_full (const tree * pt_tree);
int count_tree_item (const tree * pt_tree);
bool add_to_tree (const item * pt_item, tree * pt_tree);
bool del_from_tree (const item * pt_item, tree * pt_tree);
bool sel_from_tree (const item * pt_item, const tree * pt_tree);
void trav_tree (const tree * pt_tree, void (* pt_fun)(item one_item));
void clear_tree (tree * pt_tree);

#endif
