//自己写的增删改查供参考, 书里没有;
#ifndef _17_6_7_H
#define _17_6_7_H

#include "../s_gets1.h"

#define NAME_MAX 30

typedef struct name
{
  char first_name[NAME_MAX];
  char last_name[NAME_MAX];
}full_name;

typedef struct node
{
  full_name name;
  struct node * next;
}one_node;

typedef one_node * list;

void init_pt (list * pt_list);
_Bool if_list_full (void);
char show_menu (void);
void add_node (list * pt_list);
void delete_node (list * pt_list);
void change_node (list * pt_list);
void search_node (list * pt_list);
void select_node_num (int count, list * pt_list);
int select_node_str (char * str, list * pt_list);
int count_node (list * pt_list);
void show_list (list * pt_list, void (* pfun)(int count, full_name item));
void show_one_node (int count, full_name item);
void free_all (list * pt_list);

#endif
