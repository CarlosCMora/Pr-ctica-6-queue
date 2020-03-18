#include <stdlib.h>
#include <stdio.h>
#include "list.h"

list *create_list()
{
	list *l = (list*)malloc(sizeof(list));
	l->head = NULL;
	l->tail = NULL;
	l->num = 0;
	return l;
}

void remove_list(list *l, bool c)
{
	if(!is_empty(l)) empty(l, c);
	free(l);
	l = NULL;
}

bool add_head(list *l, DATA d)
{
	node *n = create_node(d);
	if(is_empty(l)){
		l->head = n;
		l->tail = l->head;
		l->num++;
		return true;
	}
	n->next = l->head;
	l->head = n;
	l->num++;
	return true;
}
bool add_tail(list *l, DATA d)
{
	node *n = create_node(d);
	if(is_empty(l)){
		l->head = n;
		l->tail = l->head;
		l->num++;
		return true;
	}
	l->tail->next = n;
	l->tail = n;
	l->num++;
	return true;
}

DATA remove_head(list *l){
	if(is_empty(l)){
		printf("La lista está vacía\n");
		return -1;
	}
	DATA aux = l->head->data;
	node *t = l->head;
	l->head = l->head->next;
	free(t);
	l->num--;
	return aux;
}

DATA remove_tail(list *l)
{
	if(is_empty(l)){
		printf("La lista está vacía\n");
		return -1;
	}
	DATA aux = l->tail->data;
	node *prev = NULL;
	for(prev=l->head; prev->next!= l->tail; prev = prev->next);
	free(l->tail);
	l->tail = prev;
	l->num--;
	return aux;
}

void print_list(list *l, bool c){
	if(is_empty(l)){
		printf("La lista está vacía\n");
		return;
	}
	node *t;
	printf("[ ");
	for(t = l->head; t != NULL||(t != l->tail && c); t = t->next )
	{
		printf("%d ", t->data);
	}
	if(c) printf("%d ", t->data);
	printf("]\n");
}

bool is_empty(list *l){
	if(l->head == NULL) return true;
	return false;
}

void empty(list *l, bool c){
	if(is_empty(l)){
		printf("La lista está vacía\n");
		return;
	}
	while(!is_empty(l))
	{
		remove_head(l);
	}

	l->head = l->tail =NULL;
	l->num=0;

}