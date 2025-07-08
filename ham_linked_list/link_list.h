#pragma once
typedef struct
{
	int value;
	void* next_node_addr;
} node_t;

typedef struct
{
	int len;
	node_t* root_node_addr;
} link_list_t;

void ll_create(link_list_t* ll);
int ll_get_len(link_list_t* ll);
void ll_add_node(link_list_t* ll, int val);
void ll_insert_node(link_list_t* ll, int val, int index);
void ll_remove_node(link_list_t* ll, int index);
int ll_search(link_list_t* ll, int val);
void ll_print(link_list_t* ll);