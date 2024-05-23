#include "17.20.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct tree_node_proto * have_thing;
#define HAVE_THING have_thing;

typedef struct pair_proto
{
  tree_node * father;
  tree_node * son;
}pair;

static tree_node * make_node (const item * pt_item);
static bool if_to_left (const item * pt_item, const item * pt_item1);
static bool if_to_right (const item * pt_item, const item * pt_item1);
static void add_one_node (tree_node * new_node, tree_node * root);
static void order (const tree_node * root, void (* pfun)(item one_item));
static pair seek_one_item (const item * pt_item, const tree * pt_tree);
static void del_one_node (tree_node ** pt_2_tree_node);
static void del_all_nodes (tree_node * root);

void init_tree (tree * pt_tree)
{
  pt_tree -> root = NULL;
  pt_tree -> size = 0;
}

bool if_tree_empty (const tree * pt_tree)
{
  return (!(pt_tree -> root));
}

bool if_tree_full (const tree * pt_tree)
{
  return (pt_tree -> size == MAXITEMS);
}

int count_tree_item (const tree * pt_tree)
{
  return (pt_tree -> size);
}

bool add_to_tree (const item * pt_item, tree * pt_tree)
{
  tree_node * new_node;

  if (if_tree_full (pt_tree))
  {
    fprintf (stderr, "Tree is full. \n");
    return false;
  }

  if (seek_one_item (pt_item, pt_tree).son)
  {
    pt_tree -> size --;
  }

  new_node = make_node (pt_item);

  if (!new_node)
  {
    fprintf (stderr, "Couldn't create node. \n");
    return false;
  }

  pt_tree -> size ++;

  (pt_tree -> root) ? add_one_node (new_node, pt_tree -> root) : ((pt_tree -> root) = new_node);

  return true;
}

bool del_from_tree (const item * pt_item, tree * pt_tree)
{
  pair look;

  look = seek_one_item (pt_item, pt_tree);
  if (!(look.son))
  {
    return false;
  }

  if (!(look.father))
  {
    del_one_node (&pt_tree -> root);
  }else if ((look.father -> left) == look.son)
  {
    del_one_node (&look.father -> left);
  }else
  {
    del_one_node (&look.father -> right);
  }
  pt_tree -> size --;

  return true;
}

bool sel_from_tree (const item * pt_item, const tree * pt_tree)
{
  return (seek_one_item (pt_item, pt_tree).son);
}

void trav_tree (const tree * pt_tree, void (* pt_fun)(item one_item))
{
  (pt_tree) ? order (pt_tree -> root, pt_fun) : 0;
}

void clear_tree (tree * pt_tree)
{
  if (pt_tree -> root)
  {
    del_all_nodes (pt_tree -> root);
  }
  pt_tree -> root = NULL;
  pt_tree -> size = 0;
}

static tree_node * make_node (const item * pt_item)
{
  tree_node * new_node = (tree_node *)malloc(sizeof (tree_node));

  if (new_node)
  {
    new_node -> item = *pt_item;
    new_node -> left = NULL;
    new_node -> right = NULL;
  }

  return new_node;
}

static bool if_to_left (const item * pt_item, const item * pt_item1)
{
  int cop = strcmp (pt_item -> petname, pt_item1 -> petname);
  int cop1 = strcmp (pt_item -> petkind, pt_item1 -> petkind);

  if (cop < 0)
  {
    return true;
  }else if ((!cop) && (cop1 < 0))
  {
    return true;
  }

  return false;
}

static bool if_to_right (const item * pt_item, const item * pt_item1)
{
  int cop = strcmp (pt_item -> petname, pt_item1 -> petname);
  int cop1 = strcmp (pt_item -> petkind, pt_item1 -> petkind);

  if (cop > 0)
  {
    return true;
  }else if ((!cop) && (cop1 > 0))
  {
    return true;
  }

  return false;
}

static void add_one_node (tree_node * new_node, tree_node * root)
{
  if (if_to_left (&new_node -> item, &root -> item))
  {
    (root -> left) ?
    ({
      add_one_node (new_node, root -> left);
    }) :
    ({
      root -> left = new_node;
    });
  }else if (if_to_right (&new_node -> item, &root -> item))
  {
    (root -> right) ?
    ({
      add_one_node (new_node, root -> right);
    }) :
    ({
      root -> right = new_node;
    });
  }else
  {
    new_node -> left = root -> left;
    new_node -> right = root -> right;
    root -> left = new_node;
    root -> right = HAVE_THING;
  }
}

static void order (const tree_node * root, void (* pfun)(item one_item))
{
  if (root)
  {
    order (root -> left, pfun);
    (*pfun)(root -> item);
    order (root -> right, pfun);
  }
}

static pair seek_one_item (const item * pt_item, const tree * pt_tree)
{
  pair look;
  look.father = NULL;
  look.son = pt_tree -> root;

  if (!(look.son))
  {
    return look;
  }

  while (look.son)
  {
    if (if_to_left (pt_item, &(look.son -> item)))
    {
      look.father = look.son;
      look.son = (look.son -> left);
    }else if (if_to_right (pt_item, &(look.son -> item)))
    {
      look.father = look.son;
      look.son = (look.son -> right);
    }else
    {
      break;
    }
  }

  return look;
}

static void del_one_node (tree_node ** pt_2_tree_node)
{
  tree_node * temp;

  if (!((*pt_2_tree_node) -> left))
  {
    temp = *pt_2_tree_node;
    *pt_2_tree_node = (*pt_2_tree_node) -> right;
    free (temp);
  }else if (!((*pt_2_tree_node) -> right))
  {
    temp = *pt_2_tree_node;
    *pt_2_tree_node = (*pt_2_tree_node) -> left;
    free (temp);
  }else
  {
    for (temp = (*pt_2_tree_node) -> left; temp -> right; temp = temp -> right);
    temp -> right = (*pt_2_tree_node) -> right;
    temp = *pt_2_tree_node;
    *pt_2_tree_node = (*pt_2_tree_node) -> left;
    free (temp);
  }
}

static void del_all_nodes (tree_node * root)
{
  tree_node * pt_right;

  if (root)
  {
    pt_right = root -> right;
    del_all_nodes (root -> left);
    free (root);
    del_all_nodes (pt_right);
  }
}
