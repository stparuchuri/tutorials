#ifndef _ROOT_H
#define _ROOT_H

#inlude<data_structure.h>

/* Abstract Data Types */

struct edge_root{
int edge_count;
void *head, *tail;
}sturct edge_root e_root;

struct vertex_root{
int vertex_count;
void *haed, *tail;
} struct vertex_root v_root;
 
struct graph_root{
int vertex_count,edge_count;
void *vertex, *edges;
}; struct graph_root g_root;

struct vertex_node{
v_data *data;
struct vertex_node *next, *prev;
}struct vertex_node v_node;

struct edge_node{
e_data *data;
struct edge_node *next,*prev;
} struct edge_node e_node;

/* function definitions */

()
#endif
