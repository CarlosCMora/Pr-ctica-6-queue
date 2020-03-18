#ifndef LIST_H
#define LIST_H

#include "node.h"
#include <stdbool.h>

typedef struct _list{
	node *head;
	node *tail;
	int num;
} list;

list *create_list();
void remove_list(list *l, bool c);
bool add_head(list *l, DATA d);
bool add_tail(list *l, DATA d);
DATA remove_head(list *l);
DATA remove_tail(list *l);
void print_list(list *l, bool c);
bool is_empty(list *l);//Pregunta si lista es circular
void empty(list *l, bool c);
#endif