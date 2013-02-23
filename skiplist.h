#ifndef _SKIPLIST_H_
#define _SKIPLIST_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define object int

#define MAX_LEVEL 8

typedef struct _node {
	int key;
	object *obj;
	struct _node *forward[1];
} node;

typedef struct _skiplist {
	int level;
	struct _node *head;
} skiplist;

static node *create_node(int level, int key, object *obj);
skiplist *create_skiplist(void);
static void free_node(node *nd);
void free_skiplist(skiplist *sl);
static int random_level();
void insert(skiplist *sl, int key, object *obj);
static void delete_node(skiplist *sl, node *nd, node **update);
void delete(skiplist *sl, int key);
node *find(skiplist *sl, int key);
void print(skiplist *sl);


#endif
